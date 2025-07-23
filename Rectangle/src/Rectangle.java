public class Rectangle {
     double height = 1;
     double width = 1;
    Rectangle(){

    }
    Rectangle(double height,double width){
        this.height = height;
        this.width = width;
    }
    public double getArea(){
        double area = height*width;
        return area;
    }

    public double getPerimeter(){
        double perimeter = 2*(height+width);
        return perimeter;
    }

}
