import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
        System.out.println("Enter three sides of triangle:");
        double s1 = input.nextDouble();
        double s2 = input.nextDouble();
        double s3 = input.nextDouble();
        input.nextLine();
        System.out.print("Enter color:");
        String color = input.nextLine();
        System.out.println("Is filled?");
        boolean isFilled = input.nextBoolean();
        Triangle t1 = new Triangle(s1,s2,s3,color,isFilled);
        System.out.println(t1.toString());
    }
}