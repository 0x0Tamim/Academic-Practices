class Circle2D{
    private double x;
    private double y;
    private double radius;
    Circle2D(){
        this.x=0;
        this.y=0;
        this.radius=1;
    }
    Circle2D(double x,double y,double radius){
        this.x=x;
        this.y=y;
        this.radius=radius;
    }
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public double getRadius(){
        return radius;
    }
    public double getArea(){
        return Math.PI*Math.pow(radius,2);
    }
    public double getPerimeter(){
        return 2*Math.PI*radius;
    }
    public boolean contains(double x,double y){

        return Math.sqrt(Math.pow(this.x-x,2)+Math.pow(this.y-y,2))<=this.radius;
    }
    public boolean contains(Circle2D circle){
        double d= Math.sqrt(Math.pow(circle.getX()-this.x,2)+Math.pow(circle.getY()-this.y,2));
        return d<=Math.abs(this.radius-circle.getRadius());
    }

    public boolean overlaps(Circle2D circle){
        double d= Math.sqrt(Math.pow(this.x-circle.getX(),2)+Math.pow(this.y-circle.getY(),2));
        return d<=this.radius+circle.getRadius();
    }
}

public class GeometryCircle {
    public static void main(String[] args) {
        Circle2D c1=new Circle2D(2,2,5.5);
        System.out.printf("Circle area: %.2f",c1.getArea());
        System.out.printf("\nCircle area: %.2f",c1.getPerimeter());
        System.out.println("\nDoes circle1 contains the point(3,3)?  "+c1.contains(3,3));
        System.out.println("Does c1 contain the circle with center (4,5) and radius 10.5?  "+c1.contains(new Circle2D(4,5,10.5)));
        System.out.println("Does c1 overlap the circle with center (3,5) and radius 2.3?  "+c1.overlaps(new Circle2D(3,5,2.3)));
    }
}