import java.util.*;
public class LettersInString {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a string:");
        String str = input.nextLine();
        System.out.println("Total letter = "+ countLetters(str));
    }

    public static int countLetters(String s){
        int letterCount = 0;
        for(int i = 0;i<s.length();i++){
            if(Character.isLetter(s.charAt(i))){
                letterCount++;
            }
        }
        return letterCount;
    }


}
