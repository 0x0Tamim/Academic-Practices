import java.util.Scanner;
public class BinaryTriangle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n= scanner.nextInt();
        //int m = 1;
        for(int i =1;i<=n;i++){
            int m = 1;
            for(int j =1;j<=i;j++){
                System.out.print(m);
                m=1-m;
            }
            System.out.println();
        }
    }
}
