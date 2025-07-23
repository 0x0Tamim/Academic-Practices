public class Calculator {

    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        int result1 = calculator.add(5, 10);
        System.out.println("Result of add(int, int): " + result1);

        double result2 = calculator.add(2.5, 3.5);
        System.out.println("Result of add(double, double): " + result2);

        int result3 = calculator.add(3, 6, 9);
        System.out.println("Result of add(int, int, int): " + result3);
    }

    public int add(int a, int b) {
        return a + b;
    }

    public double add(double a, double b) {
        return a + b;
    }

    public int add(int a, int b, int c) {
        return a + b + c;
    }
}