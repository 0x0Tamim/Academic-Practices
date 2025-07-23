import java.util.*;
public class TakingInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name:");
        String name = scanner.nextLine();
        System.out.println("So your name is "+name);
        System.out.println("Enter your age:");
        int age = scanner.nextInt();
        System.out.println("You are "+age+" years old");
        System.out.println("Enter your height in inch:");
        float height = scanner.nextFloat();
        System.out.println("Your height is "+height);
        System.out.println("Enter a double number:");
        double doubleNumber = scanner.nextDouble();
        System.out.println("Your entered:"+doubleNumber);
        System.out.println("Enter a character:");
        char ch = scanner.next().charAt(0);
        System.out.println("You typed"+ch);

    }
}
