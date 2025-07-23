import java.util.*;
public class randomMatrix {
    public static void main(String[] args) {
        System.out.print("Enter n to make a n*n random matrix:");
        Scanner input = new Scanner(System.in);
        System.out.print("Enter n:");
        int n = input.nextInt();
        printMatrix(n);
    }


    public static void printMatrix(int n){
        int[][]array=new int[n][n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
               array[i][j]=(int)(Math.random()*2);
            }

        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                System.out.print(array[i][j]+" ");
            }
            System.out.println();

        }
    }


}
