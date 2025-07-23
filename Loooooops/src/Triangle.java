import java.util.Scanner;
public class Triangle {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i = 1;i<=n;i++){
            for (int j = n-i+1;j>=1;j--){
                System.out.print("*");

            }
            System.out.println();
        }
    }
}
