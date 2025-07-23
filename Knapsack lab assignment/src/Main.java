import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        double capacity = sc.nextDouble();

        double[][] items = new double[n][2];
        for (int i = 0; i < n; i++) {
            items[i][0] = sc.nextDouble();
            items[i][1] = sc.nextDouble();
        }


        Arrays.sort(items, (a, b) -> Double.compare(b[0] / b[1], a[0] / a[1]));

        double totalValue = 0.0;

        for (int i = 0; i < n; i++) {
            if (capacity >= items[i][1]) {
                // Take full item
                totalValue += items[i][0];
                capacity -= items[i][1];
            } else {
                totalValue += items[i][0] * (capacity / items[i][1]);
                break;
            }
        }

        System.out.printf("%.2f\n", totalValue);
    }
}
