import java.util.Scanner;
public class factorial {
    public static int Factorial(int n){
         int fact=1; ;
        for(int i = 1;i<=n;i++){

                fact=fact*i;

        }
        return fact;

    }

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = scanner.nextInt();
        int fact = Factorial(n);
        System.out.println("Factorial of "+n+" is:"+fact);
    }
}
