public class ThreadSumWithSync {
    // Integer wrapper to hold sum
    private static Integer sum = 0;

    // Object to lock for synchronization
    private static final Object lock = new Object();

    public static void main(String[] args) {
        // Create an array of 1,000 threads
        Thread[] threads = new Thread[1000];

        // Launch 1,000 threads
        for (int i = 0; i < 1000; i++) {
            threads[i] = new Thread(new Runnable() {
                @Override
                public void run() {
                    // Synchronized block to avoid race conditions
                    synchronized (lock) {
                        sum++;
                    }
                }
            });
            threads[i].start();
        }

        // Wait for all threads to finish
        for (int i = 0; i < 1000; i++) {
            try {
                threads[i].join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        // Display the final value of sum
        System.out.println("Final sum with synchronization: " + sum);
    }
}
