import java.util.Scanner;

public class CheckPassword {
    public static void main(String[] args) {
        System.out.print("Enter a password:");
        Scanner input = new Scanner(System.in);
        String pass = input.nextLine();
        checkValidity(pass);
    }

    public static void checkValidity(String s) {
        int digitCount = 0;
        int upperCharCount = 0;
        int lowerCharCount = 0;
        int validity = 0;
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                digitCount++;
                validity++;
            } else if (Character.isUpperCase(s.charAt(i))) {
                upperCharCount++;
                validity++;
            } else if (Character.isLowerCase(s.charAt(i))) {
                lowerCharCount++;
                validity++;
            }
            else {validity =0;
                break;
            }
        }

        if (validity!=0 && s.length() >= 6 && lowerCharCount >= 1 && upperCharCount >= 1 && digitCount >= 1) {
            System.out.println("Your password is valid");
        } else {
            System.out.println("Your password is not valid");
        }
    }
}
