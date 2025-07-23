import java.io.*;
import java.util.*;

public class RemoveStr {
    public static void main(String[] args) throws Exception {

        if (args.length != 2) {
            System.out.println("Usage: java RemoveStr <string_to_remove> <filename>");
            System.exit(1);
        }

        System.out.println("String to remove: " );
        System.out.println("File: " );

        String stringToRemove = "John";
        String filename = "testfile.txt";

        File file = new File(filename);

        if (!file.exists()) {
            System.out.println("File does not exist.");
            System.exit(2);
        }

        StringBuilder content = new StringBuilder();

        try (Scanner input = new Scanner(file)) {
            while (input.hasNextLine()) {
                String line = input.nextLine();
                content.append(line.replace(stringToRemove, "")).append("\n");
            }
        }

        try (PrintWriter output = new PrintWriter(file)) {
            output.write(content.toString());
        }

        System.out.println("All occurrences of \"" + stringToRemove + "\" have been removed from " + filename);
    }
}
