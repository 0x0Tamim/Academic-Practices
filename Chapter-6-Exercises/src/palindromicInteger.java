import java.util.*;
public class palindromicInteger {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if(isPalindrome(n)){
            System.out.println("Palindrome");
        }
        else System.out.println("Not palindrome");

    }

    public static int revers(int number){
        int rev = 0;
        while (number!=0){
            rev = rev*10+number%10;
            number=number/10;
        }

        return rev;
    }

    public static boolean isPalindrome(int num){

        if(num==revers(num)){
            return true;
        }
        else return false;

      }
    }

