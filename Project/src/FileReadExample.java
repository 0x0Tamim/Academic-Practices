import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FileReadExample {
    public static void main(String[] args) {
        try {
            // Create a FileReader object
            FileReader fileReader = new FileReader("menu.txt");

            // Wrap FileReader in BufferedReader to read line by line
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            String line;
            // Read each line from the file until it's null
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);  // Print each line (or process it)
            }

            // Close the BufferedReader
            bufferedReader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

