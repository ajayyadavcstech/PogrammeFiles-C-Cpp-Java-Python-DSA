package com.ajay;
public class Rectangle{
	int length;
	int breath;

	public Rectangle(int length,int breath){
	this.length=length;
	this.breath=breath;
	}
	
	public void area(){
	System.out.println(length*breath);
	}

	public void parameter(){
	System.out.println(2*(length+breath));
	}		
}