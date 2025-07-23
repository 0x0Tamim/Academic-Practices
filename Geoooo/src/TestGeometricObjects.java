public class TestGeometricObjects {
    public static void main(String[] args) {
        // Test Circle
        Circle circle = new Circle(2.5, "blue", true);
        System.out.println("Circle:");
        System.out.println("Radius: " + circle.getRadius());
        System.out.println("Diameter: " + circle.getDiameter());
        System.out.println("Area: " + circle.getArea());
        System.out.println("Perimeter: " + circle.getPerimeter());
        System.out.println("Color: " + circle.getColor());
        System.out.println("Filled: " + circle.isFilled());
        System.out.println(circle.toString());
        System.out.println();

        // Test Rectangle
        Rectangle rectangle = new Rectangle(3.0, 4.0, "red", false);
        System.out.println("Rectangle:");
        System.out.println("Width: " + rectangle.getWidth());
        System.out.println("Height: " + rectangle.getHeight());
        System.out.println("Area: " + rectangle.getArea());
        System.out.println("Perimeter: " + rectangle.getPerimeter());
        System.out.println("Color: " + rectangle.getColor());
        System.out.println("Filled: " + rectangle.isFilled());
        rectangle.howToColor();
        System.out.println(rectangle.toString());
        System.out.println();

        ComparableCircle comparableCircle1 = new ComparableCircle(5.0);
        ComparableCircle comparableCircle2 = new ComparableCircle(3.0);
        System.out.println("ComparableCircle 1 area: " + comparableCircle1.getArea());
        System.out.println("ComparableCircle 2 area: " + comparableCircle2.getArea());

        if (comparableCircle1.compareTo(comparableCircle2) > 0) {
            System.out.println("ComparableCircle 1 is larger.");
        } else if (comparableCircle1.compareTo(comparableCircle2) < 0) {
            System.out.println("ComparableCircle 2 is larger.");
        } else {
            System.out.println("Both circles are the same size.");
        }
        System.out.println();

        GeometricObject geoObject1 = new Circle(3.0, "green", true);
        GeometricObject geoObject2 = new Rectangle(6.0, 4.0, "yellow", true);
        System.out.println("GeometricObject as Circle:");
        System.out.println("Area: " + geoObject1.getArea());
        System.out.println("Perimeter: " + geoObject1.getPerimeter());
        System.out.println(geoObject1.toString());
        System.out.println();

        System.out.println("GeometricObject as Rectangle:");
        System.out.println("Area: " + geoObject2.getArea());
        System.out.println("Perimeter: " + geoObject2.getPerimeter());
        System.out.println(geoObject2.toString());
    }
}
