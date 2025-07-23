
package com.mycompany.labfinalll;

public class Geomain {
    public static void main(String[]args){
        Circle c1 = new Circle(5);
        Circle c2 = new Circle(7);
        Rectangle r1 = new Rectangle(5,7);
        Rectangle r2 = new Rectangle(7,8);
        GeoometricObject.max(r1, r2);
        GeoometricObject.max(c1, c2);
        
        GeoometricObject largerCircle = GeoometricObject.max(c1, c2);
        System.out.println("The larger circle is: " + largerCircle);

        
        GeoometricObject largerRectangle = GeoometricObject.max(r1, r2);
        System.out.println("The larger rectangle is: " + largerRectangle);
        
    }
    
}
