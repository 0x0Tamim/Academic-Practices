import java.util.Scanner;

public class MatrixBorder {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the dimensions of the matrix from the user
        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols = scanner.nextInt();

        // Define and initialize the matrix
        int[][] matrix = new int[rows][cols];

        // Fill the matrix with 1s (as we are going to print a border of 1s)
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j]= scanner.nextInt();
            }
        }

        // Print the matrix with the border format
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Check if we are on the border of the matrix
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                    System.out.print(matrix[i][j] + " ");
                } else {
                    System.out.print("  "); // Print space for non-border elements
                }
            }
            System.out.println(); // Move to the next line after each row
        }

        scanner.close();
    }
}
