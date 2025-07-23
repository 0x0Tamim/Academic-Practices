public class Menu {
    private String itemName;
    private double itemPrice;
    private int itemStock;

    public Menu(String itemName, double itemPrice, int itemStock) {
        this.itemName = itemName;
        this.itemPrice = itemPrice;
        this.itemStock = itemStock;
    }

    // Method to reduce stock
    public void reduceStock(int quantity) {
        if (quantity <= itemStock) {
            itemStock -= quantity;
        } else {
            System.out.println("Not enough stock for " + itemName);
        }
    }

    public String getItemName() {
        return itemName;
    }

    public int getItemStock() {
        return itemStock;
    }

    @Override
    public String toString() {
        return itemName + ": $" + itemPrice + " (Stock: " + itemStock + ")";
    }

    // Method to convert menu item to a file-friendly string format
    public String toFileString() {
        return itemName + "," + itemPrice + "," + itemStock;
    }
}

