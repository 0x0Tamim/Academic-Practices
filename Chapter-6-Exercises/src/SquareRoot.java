import java.util.Scanner;

public class SquareRoot {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter n: ");
        double n = input.nextDouble();

        double lastGuess = 1.0;
        double nextGuess = (lastGuess + n / lastGuess) / 2.0;

        while (Math.abs(nextGuess - lastGuess) > 0.0001) {
            lastGuess = nextGuess;
            nextGuess = (lastGuess + n / lastGuess) / 2.0;
        }

        System.out.println("Square root of " + n + " is " + nextGuess);
    }
}


