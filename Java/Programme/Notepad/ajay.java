import com.ajay.Rectangle;
import com.ajay.Cylinder;
import com.ajay.Circle;
import com.ajay.Square;
public class ajay{
	public static void main(String[] n){

	System.out.println("This is for Rectangle");
	Rectangle r=new Rectangle(5,3);
	r.area();
	r.parameter();

	System.out.println("This is for Circle");
	Circle c=new Circle(3);
	c.area();
	c.parameter();

	System.out.println("This is for Cylinder");
	Cylinder cy=new Cylinder(5,3);
	cy.curvedarea();
	cy.totalarea();
	cy.volume();

	System.out.println("This is for Square");
	Square s=new Square(5);
	s.area();
	s.parameter();

	

	}
}