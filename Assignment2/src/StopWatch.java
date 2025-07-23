import java.util.Random;

class StopWatch {
    private long startTime;
    private long endTime;

    // Constructor that initializes startTime to the current time
    StopWatch() {
        startTime = System.currentTimeMillis();
    }

    // Method to start the stopwatch (reset startTime to the current time)
    public void start() {
        this.startTime = System.currentTimeMillis();
    }

    // Method to stop the stopwatch (set endTime to the current time)
    public void stop() {
        this.endTime = System.currentTimeMillis();
    }

    // Method to get the elapsed time in milliseconds
    public long getElapsedTime() {
        return endTime - startTime;
    }
}

    class SelectionSort {
    public static void main(String[] args) {+
        Random rand = new Random();
        int[] randomNumbers = new int[100000];

        // Generate random numbers and fill the array
        for (int i = 0; i < randomNumbers.length; i++) {
            randomNumbers[i] = rand.nextInt(100000);
        }

        // Create a stopwatch and measure the time taken to sort the array
        StopWatch stopwatch = new StopWatch();
        stopwatch.start();
        Sorting(randomNumbers);
        stopwatch.stop();

        // Output the elapsed time
        System.out.println("The execution time for sorting 100,000 numbers is: " + stopwatch.getElapsedTime() + " milliseconds");
    }

    // Selection sort implementation
    public static void Sorting(int[] numbers) {
        for (int i = 0; i < numbers.length; i++) {
            int small = i;
            for (int j = i + 1; j < numbers.length; j++) { // Fixed the inner loop condition
                if (numbers[small] > numbers[j])
                    small = j;
            }
            int temp = numbers[i];
            numbers[i] = numbers[small];
            numbers[small] = temp;
        }
    }
}
