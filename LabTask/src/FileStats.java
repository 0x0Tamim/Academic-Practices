import java.io.*;
import java.util.Scanner;

public class FileStats {
    public static void main(String[] args) throws Exception {
        // Check if a filename is provided as an argument
        if (args.length != 1) {
            System.out.println("Usage: java FileStats <filename>");
            System.exit(1);
        }

        String filename = args[0];
        File file = new File(filename);

        // Check if the file exists
        if (!file.exists()) {
            System.out.println("File does not exist.");
            System.exit(2);
        }

        int charCount = 0;
        int wordCount = 0;
        int lineCount = 0;

        // Read the file using Scanner
        try (Scanner input = new Scanner(file)) {
            while (input.hasNextLine()) {
                String line = input.nextLine();
                lineCount++; // Count lines

                // Count characters (including spaces)
                charCount += line.length();

                // Count words (separated by whitespace)
                String[] words = line.split("\\s+");  // Split by any whitespace
                wordCount += words.length;
            }
        }

        // Print the results
        System.out.println("File: " + filename);
        System.out.println("Number of characters: " + charCount);
        System.out.println("Number of words: " + wordCount);
        System.out.println("Number of lines: " + lineCount);
    }
}
