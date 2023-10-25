package com.ajay;
public class Cylinder{
	int radius;
	int height;
	
	public Cylinder(int radius,int height){
	this.radius=radius;
	this.height=height;
	}
	
	public void curvedarea(){
	System.out.println(2*Math.PI*radius*height);
	}

        public void totalarea(){
	System.out.println(2*Math.PI*radius*height+2*Math.PI*radius*radius);
	}

	public void volume(){
	System.out.println(Math.PI*radius*radius*height);
	}
}