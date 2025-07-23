import java.util.Scanner;

public class ComputerArchitecture {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        short num = input.nextShort();
        String binary = Integer.toBinaryString(num);
        if (binary.length() > 16) {
            binary = binary.substring(binary.length() - 16);
        } else {
            while (binary.length() < 16) {
                binary = "0" + binary;
            }
        }
        System.out.println("The bits are " + binary);
    }
}
