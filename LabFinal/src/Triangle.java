
abstract class GeometricObject{
    private String color;
    private boolean isFilled;
    GeometricObject(String color,boolean isFilled){
        this.color = color;
        this.isFilled = isFilled;
    }
    public abstract double getArea();
    public abstract double getPerimeter();
    public boolean isFilled() {
        return isFilled;
    }

    public String getColor() {
        return color;
    }
    public abstract String toString();
}
public class Triangle extends GeometricObject {
        private double side1, side2, side3;
   public Triangle( double side1, double side2, double side3, String color,boolean isFilled){
            super(color, isFilled);
             this.side1 = side1;
             this.side2 = side2;
             this.side3 = side3;
        }

        @Override
        public double getArea () {
            double s = (side1 + side2 + side3)/2;
            return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }

        @Override
        public double getPerimeter () {
            return side1 + side2 + side3;
        }

        @Override
        public String toString () {
            return "Color: " + getColor() + " Filled: " + isFilled() + " Area: " + getArea() + " Perimeter: " + getPerimeter();
        }

    }
