
package com.mycompany.labfinalll;

public class Circle extends GeoometricObject {
    private double radius;
    Circle(double radius){
        this.radius=radius;
    }
    
    public double getArea(){
        return Math.PI*radius*radius;
    }
    
     public double getPerimeter(){
        return 2*Math.PI*radius;
    }
      public String toString() {
        return "Circle with radius " + radius + " and area " + getArea();
    }
    
}
