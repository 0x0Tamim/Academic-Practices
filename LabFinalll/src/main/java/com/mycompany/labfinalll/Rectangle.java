
package com.mycompany.labfinalll;

public class Rectangle extends GeoometricObject {
    private double width;
    private double height;
    Rectangle(double width, double height){
        this.width = width;
        this.height = height;
    }
    
    public double getArea(){
        return width*height;
        
    }
    
    public double getPerimeter(){
        return 2*(width+height);
    }
    
     public String toString() {
        return "Rectangle with width " + width + ", height " + height + " and area " + getArea();
    }
}
