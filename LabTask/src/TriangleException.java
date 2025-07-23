public class TriangleException {
    public static class IllegalTriangleException extends Exception {
        public IllegalTriangleException() {
            super();
        }
    }
    public static class Triangle {
        private double s1;
        private double s2;
        private double s3;

        public Triangle(double s1, double s2, double s3) throws IllegalTriangleException {
            if (isValidTriangle(s1, s2, s3)) {
                this.s1 = s1;
                this.s2 = s2;
                this.s3 = s3;
            } else {
                throw new IllegalTriangleException();
            }
        }
        public void display() {
            System.out.println(" sides: " + s1 + ", " + s2 + ", " + s3);
        }

        public boolean isValidTriangle(double side1, double side2, double side3) {
            if((side1 + side2 > side3) &&
                    (side1 + side3 > side2) &&
                    (side2 + side3 > side1))
                return true;
            else return false;
        }

    }

    public static void main(String[] args) {
        try {

            Triangle t1 = new Triangle(4, 5, 6);
            System.out.print("Triangle1 ");
            t1.display();
            System.out.print("Triangle2: ");
            Triangle t2 = new Triangle(1, 2, 3);

            t2.display();
        } catch (IllegalTriangleException e) {
            System.out.println("Invalid triangle sides.");
        }
    }
}
