import java.util.*;
public class FinancialApplication {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter loan amount: ");
        double loanAmount = input.nextDouble();
        System.out.print("Enter number of years: ");
        int years = input.nextInt();
        double startRate = 5.0;
        double endRate = 8.0;
        double increment = .125;
        System.out.printf("%-18s%-18s%-18s\n","Interest Rate","Monthly Payment","Total Payment");
        for(double rate = startRate;rate<=endRate;rate=rate+increment){
            double monthlyRate = (rate/100)/12;
            double numberOfPayements = years*12;
            double monthlyPayment =(loanAmount*monthlyRate* Math.pow((1+monthlyRate),numberOfPayements))/(Math.pow((1+monthlyRate),numberOfPayements)-1);
            double totalPayment = monthlyPayment*12*years;
            System.out.printf("%-18.3f%-18.2f%-18.2f\n",rate,monthlyPayment,totalPayment);
        }
    }
}
