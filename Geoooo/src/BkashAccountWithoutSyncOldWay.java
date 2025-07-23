public class BkashAccountWithoutSyncOldWay {
    private static int balance = 0; // Shared variable for bKash account balance

    public static void main(String[] args) {
        // Create three threads representing the three agents
        Thread agent1 = new Thread(new Runnable() {
            public void run() {
                creditAccount(5000); // Agent 1 credits 5000 BDT
            }
        });

        Thread agent2 = new Thread(new Runnable() {
            public void run() {
                creditAccount(2000); // Agent 2 credits 2000 BDT
            }
        });

        Thread agent3 = new Thread(new Runnable() {
            public void run() {
                creditAccount(1000); // Agent 3 credits 1000 BDT
            }
        });

        // Start the threads
        agent1.start();
        agent2.start();
        agent3.start();

        // Wait for all threads to finish
        try {
            agent1.join();
            agent2.join();
            agent3.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Display the final balance
        System.out.println("Final balance without synchronization: " + balance);
    }

    // Method to credit the account with a certain amount
    public static void creditAccount(int amount) {
        balance += amount; // Adds the amount to the balance
    }
}
