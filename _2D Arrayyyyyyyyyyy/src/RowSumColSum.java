import java.util.Scanner;
public class RowSumColSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int row = scanner.nextInt();
        int col = scanner.nextInt();
        int[][] Array = new int[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                Array[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Your matrix is:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(Array[i][j] + " ");
            }
            System.out.println();
        }

        for (int i = 0; i < row; i++) {
            int rowSum = 0;
            for (int j = 0; j < col; j++) {
                rowSum += Array[i][j];
            }
            System.out.println("Sum of "+i+ "th row:" +rowSum);

        }
        System.out.println();

        for (int j = 0; j < col; j++) {
            int colSum = 0;
            for (int i = 0; i < row; i++) {
                colSum += Array[i][j];
            }
            System.out.println("Sum of "+j+ "th col:" +colSum);

        }



    }
}
