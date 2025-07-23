import java.util.Scanner;

public class PalindromicPrime {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = 0;
        int number = 2;
        System.out.println("First 100 palindromic prime numbers are :");

        while (count < 100) {
            if (isPrimeNumber(number) && isPalindrome(number)) {
                System.out.print(number + " ");
                count++;
                if (count % 10 == 0) {
                    System.out.println();
                }
            }
            number++;
        }
    }

    public static int Reverse(int n) {
        int rev = 0;
        while (n != 0) {
            rev = rev * 10 + n % 10;
            n = n / 10;
        }
        return rev;
    }

    public static boolean isPalindrome(int num) {
        if(num == Reverse(num)){
            return true;
        }
        else return false;
    }

    public static boolean isPrimeNumber(int n) {

        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
