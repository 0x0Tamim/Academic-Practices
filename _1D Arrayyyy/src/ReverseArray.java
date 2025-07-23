import java.util.Scanner;
public class ReverseArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter array size:");
        int n = scanner.nextInt();
        int Array[] = new int[n];
        System.out.println("Enter array elements one by one:");
        for (int i = 0; i < n; i++) {
           Array[i]=scanner.nextInt();

        }
        System.out.println("You entered:");
        for (int i = 0; i < n; i++) {
            System.out.print(Array[i] + " ");
        }
        int temp = 0;
        for(int i=0;i<n/2;i++){
            temp = Array[i];
            Array[i]=Array[n-i-1];
            Array[n-i-1]=temp;

        }
        System.out.print("\nArray elements in reverse order: ");
        for (int i = 0; i < n; i++) {
            System.out.print(Array[i] + " ");
        }
    }
}