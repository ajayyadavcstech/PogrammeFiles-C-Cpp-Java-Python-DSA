class base{
    int x;
    public base(){
        System.out.println("this is base class");
    }
}

class derived extends base{
    int y;
    public derived(){
        System.out.println("this is derived class");
    }
}

public class inheritance {
    public static void main(String[] args) {
        derived d=new derived();
        d.x=4;
        d.y=7;
        System.out.println(d.x+" "+d.y);
        


        
    }
}
