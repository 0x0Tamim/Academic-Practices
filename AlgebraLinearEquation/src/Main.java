import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a,b,c,d,e,f;
        System.out.println("Enter a,b,c,d,e,f:");
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        d = input.nextDouble();
        e = input.nextDouble();
        f = input.nextDouble();
        AlgebraLinearEq eq = new AlgebraLinearEq(a,b,c,d,e,f);

        if(eq.isSolvable()){
            System.out.println("X = "+eq.getX()+" Y = "+eq.getY());
        }
        else System.out.println("The equation has no solution");



    }
}