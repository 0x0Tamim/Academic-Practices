import java.util.Scanner;
public class MaximumAndMinimumElement {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of Array:");
        int n = scanner.nextInt();
        int array[] = new int[n];
        System.out.println("Enter array elements one by one:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();

        }
        System.out.println("You entered:");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        int max = array[0];
        int maxPos = 0;
        for (int i = 1; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
                maxPos = i + 1;

            }
        }
        System.out.println("\nHere maximum element is " + max + " which is in " + maxPos + "th position");
        int min = array[0];
        int minPos = 0;
        for (int i = 1; i < n; i++) {
            if (array[i] < min) {
                min = array[i];
                minPos = i + 1;

            }


        }
        System.out.println("\nHere minimum element is " + min + " which is in " + minPos + "th position");


    }

}

