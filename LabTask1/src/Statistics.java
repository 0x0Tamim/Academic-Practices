import java.util.*;
public class Statistics {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double num[] = new double[10];
        System.out.print("Enter ten number:");
        for(int i=0;i<10;i++){
            num[i]=input.nextDouble();
        }
        int n = 10;
        double sum = 0;
        double sumSquare = 0;
        for(int i=0;i<10;i++){
            sum += num[i];
            sumSquare += Math.pow(num[i], 2);
        }
        double mean = sum/n;
        double deviation = Math.sqrt((sumSquare - Math.pow(sum,2)/n )/(n-1));
        System.out.println("The mean is "+mean);
        System.out.println("The standard deviation is "+deviation);

    }
}
