/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.labfinalll;

public abstract class GeoometricObject implements Comparable<GeoometricObject>{
    private String color;
    private boolean filled;
    private  java.util.Date dateCreated;
    GeoometricObject(){
        dateCreated = new java.util.Date();
    }

    public GeoometricObject(String color, boolean filled){
        dateCreated=new java.util.Date();
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public boolean isFilled() {
        return filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }
    public abstract double getArea();
    public abstract double getPerimeter();
    public int compareTo(GeoometricObject o){
        return Double.compare(this.getArea(),o.getArea());
    }
    public static GeoometricObject max(GeoometricObject o1, GeoometricObject o2){
        if(o1.compareTo(o2)>=0){
            return o1;
        }
        else return o2;
    }
}