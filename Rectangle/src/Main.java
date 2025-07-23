public class Main {
    public static void main(String[] args) {
       Rectangle rect1 = new Rectangle(4,40);
       Rectangle rect2 = new Rectangle(3.5,35.9);
        System.out.println("Height and Width of first rectangle are:"+rect1.height+","+rect1.width);
        System.out.println("Area of first rectangle = "+rect1.getArea());
        System.out.println("Perimeter of first rectangle = "+rect1.getPerimeter());

        System.out.println("Height and Width of first rectangle are:"+rect2.height+","+rect2.width);
        System.out.println("Area of first rectangle = "+rect2.getArea());
        System.out.println("Perimeter of first rectangle = "+rect2.getPerimeter());

        }
    }
