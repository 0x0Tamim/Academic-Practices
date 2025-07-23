import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.URL;

public class ReadFrmWeb {
    public static void main(String[] args) {
        String urlString = "https://en.wikipedia.org/wiki/Tamim_Iqbal";//previous address not found

        try {
            URL url = new URL(urlString);

            BufferedReader reader = new BufferedReader(new InputStreamReader(url.openStream()));

            String line;
            int wordCount = 0;
            while ((line = reader.readLine()) != null) {
                String[] words = line.split("\\s+");
                wordCount += words.length;
            }

            reader.close();

            System.out.println("The Address contains " + wordCount + " words.");

        } catch (IOException e) {
            System.out.println("Error reading from the URL: " + e.getMessage());
        }
    }
}
