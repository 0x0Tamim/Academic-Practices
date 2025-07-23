import java.util.Scanner;
public class ArrayExeption {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int[]array = new int[100];
        for(int i = 0; i < 100; i++){
            array[i] = (int)(Math.random()*100);
        }

        try{
            System.out.println("Enter an index to display the value: ");
            int index = input.nextInt();
            System.out.println("Array["+index+"] = "+array[index]);
        }catch (ArrayIndexOutOfBoundsException e){
            System.out.println(e.getMessage());
        }

    }
}
