package com.ajay;
public class Circle{
	int radius;
	public Circle(int radius){
	this.radius=radius;
	}
	
	public void area(){
	System.out.println(Math.PI*radius*radius);
	}

	public void parameter(){
	System.out.println(2*Math.PI*radius);
	}
}