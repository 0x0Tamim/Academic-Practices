import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of rows and columns in array:");
        int row = input.nextInt();
        int column = input.nextInt();
        double array[][] = new double[row][column];
        System.out.println("Enter array elements:");
        for(int i = 0;i < array.length;i++){
            for(int j = 0;j< array.length;j++){
                array[i][j] = input.nextDouble();
            }


        }
        Location location = Location.locateLargest(array);
        System.out.println("The location of the largest element "+location.maxValue+ " is at ("+location.row+","+location.column+") position");
    }
}