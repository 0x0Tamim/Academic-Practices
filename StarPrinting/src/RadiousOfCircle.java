import java.util.*;
public class RadiousOfCircle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the radious of a circle:");
        float r = scanner.nextFloat();
        double area = 3.1416*r*r;
        System.out.println("Area of  the circle is "+area);
    }
}
