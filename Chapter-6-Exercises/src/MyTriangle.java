import java.util.*;
public class MyTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter three sides of triangle");
        System.out.print("Side-1:");
        double side1 = input.nextDouble();
        System.out.print("Side-2:");
        double side2 = input.nextDouble();
        System.out.print("Side-3:");
        double side3 = input.nextDouble();
        if(isValid(side1,side2,side3)){
            System.out.println("Area = "+area(side1,side2,side3));
        }
        else System.out.println("Input is invalid");
    }

    public static boolean isValid(double s1,double s2,double s3){
        if(s1+s2>s3&&s2+s3>s1&&s3+s1>s2){
            return true;
        }
        else {
            return false;
        }
    }


    public static double area(double s1,double s2, double s3){
        double s = (s1+s2+s3)/2;
        double Area = Math.sqrt(s*(s-s1)*(s-s2)*(s-s3));
        return Area;

    }



}
