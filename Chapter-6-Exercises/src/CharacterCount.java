import java.util.Scanner;

public class CharacterCount {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = input.nextLine();

        System.out.println("Enter the character to count:");
        char ch = input.next().charAt(0);

        int count = count(str, ch);
        System.out.println("The letter '" + ch + "' is present " + count + " time(s).");

    }
    public static int count(String s, char c) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == c) {
                count++;
            }
        }
        return count;
    }
}
