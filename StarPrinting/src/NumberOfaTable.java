import java.util.Scanner;
public class NumberOfaTable {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        for(int i =1;i<11;i++){
            System.out.println(n+ "×" +i+ "=" +n*i);
        }
    }
}
