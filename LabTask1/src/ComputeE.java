public class ComputeE {
    public static void main(String[] args) {
        int[] values = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};

        for (int i = 0; i < values.length; i++) {
            int value = values[i];
            System.out.printf("e value for i = %d: %.15f%n", value, computeE(value));
        }
    }

    public static double computeE(int n) {
        double e = 1.0;
        double factorial = 1.0;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
            e += 1.0 / factorial;
        }

        return e;
    }
}
