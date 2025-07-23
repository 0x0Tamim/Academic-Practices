import java.util.Scanner;
import java.lang.Math;
public class PrimeNumber {
    public static void isPrimeNumber(int n){
        int count =  0;
         if (n<=1){
             System.out.println("Not Prime");
             return;}
        for(int i =2;i<=Math.sqrt(n);i++){
                     if(n%i==0){
                           count += 1;
                       }
        }
        if(count==0){
            System.out.println("Prime");
        }
        else System.out.println("Not Prime");

    }

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = scanner.nextInt();
        isPrimeNumber(n);

    }
}
