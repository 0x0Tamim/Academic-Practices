public class Octagon extends GeometricObject implements Comparable<Octagon>,Cloneable{
    private double side;
    public Octagon(String color, boolean filled,double side){
        super(color,filled);
        this.side = side;
    }

    public double getArea(){
       return (2+2*Math.sqrt(2))*side*side;
    }

    @Override
    public double getPerimeter() {
        return 8*side;
    }

    public Object clone() {
        try {
            return super.clone();
        } catch (CloneNotSupportedException e) {
            return null;
        }
    }

    public int compareTo(Octagon o) {
        if(this.getArea() > o.getArea()){
            return 1;
        }
        else if(this.getArea()<o.getArea()){
            return -1;
        }
        else return 0;
    }
}
