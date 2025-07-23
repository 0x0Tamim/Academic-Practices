import java.util.Scanner;
public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two number:");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        char ch;
        System.out.println("Enter required operation:");
        ch = scanner.next().charAt(0);
        switch ( ch ){
            case '+' :
                System.out.println(a+b);
            break;
            case '-':
                System.out.println(a-b);
            break;
            case '*' :System.out.println(a*b);
            break;
            case '/' :System.out.println((float) a/b);
            break;
            default:
                System.out.println("invalid operation");
        }
    }
}
