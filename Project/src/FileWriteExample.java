import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileWriteExample {
    public static void main(String[] args) {
        try {
            // Create a FileWriter object
            FileWriter writer = new FileWriter("menu.txt");

            // Write data to the file
            writer.write("Burger,10.99,505\n");  // itemName, price, stock
            writer.write("Pizzhga,12.99,30\n");
            writer.write("Fries,3.99,00\n");

            // Close the file writer
            writer.close();

            System.out.println("Data has been written to the file.");
        } catch (IOException e) {
            e.printStackTrace();
        }

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

