import java.util.*;
public class CheckPassword {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter password:");
        String pass = input.nextLine();
        validity(pass);

    }

    public static void validity(String s){
        int digitCount = 0;
        int charCount = 0;
        int validity = 0;
        for(int i = 0;i<s.length();i++){
            if(Character.isDigit(s.charAt(i))){
                digitCount++;
                validity++;
            }
            else if(Character.isLetter(s.charAt(i))){
                charCount++;
                validity++;
            }
            else {
                validity = 0;
                break;
            }
        }

        if(s.length()>=8&&digitCount>=2&&validity!=0){
            System.out.println("Password is valid :)");

        }
        else System.out.println("Password is not valid :(");
    }
}
