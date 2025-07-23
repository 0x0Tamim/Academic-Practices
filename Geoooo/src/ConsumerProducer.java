import java.util.concurrent.*;
import java.util.concurrent.locks.*;
public class ConsumerProducer {
    private static Buffer buffer = new Buffer();
    public static void main(String[] args) {
        // Create a thread pool with two threads
        ExecutorService executor = Executors.newFixedThreadPool(2);
        executor.execute(new ProducerTask());
        executor.execute(new ConsumerTask());
        executor.shutdown();
    }
    private static class ProducerTask implements Runnable {
        public void run() {
            int i = 1;
            while (true) {
                System.out.println("Producer writes " + i);
                buffer.write(i++); // Add a value to the buffer
            }
        }
    }
    private static class ConsumerTask implements Runnable {
        public void run() {
            while (true) {
                System.out.println("\t\t\tConsumer reads " + buffer.read());
            }
        }
    }
    private static class Buffer {
        private static final int CAPACITY = 1; // Buffer size
        private java.util.LinkedList<Integer> queue = new java.util.LinkedList<>();
        private static Lock lock = new ReentrantLock();
        private static Condition notEmpty = lock.newCondition();
        private static Condition notFull = lock.newCondition();
        public void write(int value) {
            lock.lock();
            try {
                while (queue.size() == CAPACITY) {
                    System.out.println("Wait for notFull condition");
                    notFull.await();
                }
                queue.offer(value);
                notEmpty.signal();
            } finally {
                lock.unlock();
            }
        }
        public int read() {
            int value = 0;
            lock.lock();
            try {
                while (queue.isEmpty()) {
                    System.out.println("\t\t\tWait for notEmpty condition");
                    notEmpty.await();
                }
                value = queue.remove();
                notFull.signal();
            } finally {
                lock.unlock();
            }
            return value;
        }
    }
}
