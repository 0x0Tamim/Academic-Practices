import java.util.InputMismatchException;
import java.util.Scanner;
public class CalculatorException {
    private double number1;
    private double number2;
    public CalculatorException(){
        this.number1 = 0;
        this.number2 = 0;
    }

    public void setNumber1(double number1) {
        this.number1 = number1;
    }
    public void setNumber2(double number2){
        this.number2 = number2;
    }

    public double getPlus(){
        return number1+number2;
    }
    public double getMinus(){
        return number1-number2;
    }
    public double getMultipication(){
        return number1*number2;
    }
    public double getDivision(){
        if(number2 == 0){
            throw new ArithmeticException("Cannot divide by zero.");
        }
        return number1/number2;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        CalculatorException c1 = new CalculatorException();
        System.out.println("Enter two number:");

        try {

            double num1 = input.nextDouble();
            double num2 = input.nextDouble();
            c1.setNumber1(num1);
            c1.setNumber2(num2);
            System.out.println("number1 + number2 = "+c1.getPlus());
            System.out.println("number1 - number2 = "+c1.getMinus());
            System.out.println("number1 * number2 = "+c1.getMultipication());
            System.out.println("number1 / number2 = "+c1.getDivision());
        } catch (InputMismatchException e){
            System.out.println("Wrong operand type!");
        }
        catch (ArithmeticException e){
            System.out.println(e.getMessage());
        }

    }

}
