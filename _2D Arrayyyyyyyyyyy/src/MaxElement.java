import java.util.Scanner;
public class MaxElement {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int row= scanner.nextInt();
        int col= scanner.nextInt();
        int [][]Array=new int[row][col];
        for (int i = 0;i<row;i++){
            for (int j = 0;j<col;j++){
                Array[i][j]= scanner.nextInt();
            }
        }

        System.out.println("Your matrix is:");
        for(int i = 0;i<row;i++){
            for (int j = 0;j<col;j++){
                System.out.print(Array[i][j]+" ");
            }
            System.out.println();
        }
        int max=Integer.MIN_VALUE;
        for (int i = 0;i<row;i++){
            for (int j = 0;j<col;j++){
                if (Array[i][j]>max){
                    max=Array[i][j];
                }
            }
        }
        System.out.println("Here maximum element is: "+max);
    }
}
