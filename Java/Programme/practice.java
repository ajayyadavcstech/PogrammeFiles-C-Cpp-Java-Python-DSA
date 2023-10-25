class circle{
    float radius;
    public circle(Float radius)
    {
        this.radius=radius;
    }
    public float area()
    {
        return ((float)Math.PI*radius*radius);
    }
}

class cylinder extends circle{
    float height;
    public cylinder(Float radius,Float height)
    {
        super(radius);
        this.height=height;

    }
    public float area()
    {
        return 2*(super.area())+2*(float)Math.PI*radius*height;
    }
}

public class practice {
    public static void main(String[] args) {
        cylinder c=new cylinder(5f, 6f);
        System.out.println(c.area());

        
    }
}
