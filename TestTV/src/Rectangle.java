public class Rectangle {
    public static void main(String[] args) {

        Rect myRect = new Rect(5,7);
        myRect.displayDimensions();
        Area(myRect);
    }
    public static void Area(Rect rect){
        double area = rect.length*rect.width;
        System.out.println("Area = "+area);
    }
}
 class Rect{
     double length;
     double width;
      Rect(double length, double width){
         this.length = length;
         this.width = width;
    }
    void displayDimensions(){
        System.out.println("Length: "+length+" Width: "+width);
    }

}
