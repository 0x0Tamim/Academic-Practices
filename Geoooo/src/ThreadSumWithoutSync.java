public class ThreadSumWithoutSync {
    // Integer wrapper to hold sum
    private static Integer sum = 0;

    public static void main(String[] args) {
        // Create an array of 1,000 threads
        Thread[] threads = new Thread[1000];

        // Launch 1,000 threads
        for (int i = 0; i < 1000; i++) {
            threads[i] = new Thread(new Runnable() {
                @Override
                public void run() {
                    // Each thread adds 1 to sum (no synchronization)
                    sum++;
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
        System.out.println("Final sum without synchronization: " + sum);
    }
}
