import java.util.Scanner;
public class PrintBoundaryValue {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int row = scanner.nextInt();
        int col = scanner.nextInt();
        int [][]Array=new int[row][col];
        for(int i = 0;i<row;i++){
            for (int j = 0;j<col;j++){
                Array[i][j]= scanner.nextInt();
            }
        }
        System.out.println("Your matrix is:");
        for(int i = 0;i<row;i++){
            for (int j = 0;j<col;j++){
                if (i==0||i==row-1||j==0||j==col-1){
                System.out.print(Array[i][j]+" ");
                }  else {
                    System.out.print("  ");
                }

            }
            System.out.println();
        }
    }
}
