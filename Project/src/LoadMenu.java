import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class LoadMenu {
    public static void main(String[] args) {
        List<Menu> menuItems = new ArrayList<>();

        try {
            BufferedReader reader = new BufferedReader(new FileReader("menu.txt"));
            String line;

            while ((line = reader.readLine()) != null) {
                String[] data = line.split(",");  // Split by comma

                // Create a Menu object from the data and add to the list
                Menu item = new Menu(data[0], Double.parseDouble(data[1]), Integer.parseInt(data[2]));
                menuItems.add(item);
            }

            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Display loaded menu items
        for (Menu item : menuItems) {
            System.out.println(item);
        }
    }
}

