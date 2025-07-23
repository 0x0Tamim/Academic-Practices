import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class ScoreCalculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the filename: ");
        String filename = input.nextLine();
        try {
            File file = new File(filename);
            Scanner fileScanner = new Scanner(file);

            int total = 0;
            int count = 0;

            while (fileScanner.hasNext()) {
                if (fileScanner.hasNextInt()) {
                    int score = fileScanner.nextInt();
                    total += score;
                    count++;
                } else {
                    fileScanner.next();
                }
            }
            if (count > 0) {
                double average = (double) total / count;
                System.out.println("Total score: " + total);
                System.out.println("Average score: " + average);
            } else {
                System.out.println("No valid scores found in the file.");
            }
            fileScanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("File not found. Please check the filename.");
        }

        input.close();
    }
}
