import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class LetterCounter {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a filename: ");
        String filename = input.nextLine();

        int[] letterCounts = new int[26];

        try {
            File file = new File(filename);
            Scanner fileScanner = new Scanner(file);
            while (fileScanner.hasNextLine()) {
                String line = fileScanner.nextLine().toUpperCase();

                for (int i = 0; i < line.length(); i++) {
                    char ch = line.charAt(i);
                    if (ch >= 'A' && ch <= 'Z') {
                        letterCounts[ch - 'A']++;
                    }
                }
            }
            fileScanner.close();
            for (int i = 0; i < 26; i++) {
                System.out.println("Number of " + (char) ('A' + i) + "'s: " + letterCounts[i]);
            }
        } catch (FileNotFoundException e) {
            System.out.println("File not found. Please check the filename.");
        }

        input.close();
    }
}
