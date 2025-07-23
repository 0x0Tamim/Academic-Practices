// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        Octagon oct1 = new Octagon("Red",true,5);
        System.out.println("Area:"+oct1.getArea());
        System.out.println("Perimeter:"+oct1.getPerimeter());
        Octagon oct2 = (Octagon) oct1.clone();
        int comparision = oct1.compareTo(oct2);
        if(comparision == 0){
            System.out.println("Octagons are identical in area.;");
        }
        else System.out.println("Octagons are not identical in area.");
    }
}