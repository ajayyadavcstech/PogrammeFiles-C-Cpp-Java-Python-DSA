class base1{
    int x;
    public base1(){
        System.out.println("this is base class");
    }
}

class derived1 extends base{
    int y;
    public derived1(){
        System.out.println("this is derived class");
    }
}

class derivedagin extends derived{
    public derivedagin(){
        System.out.println("this is child of derived class");
    }
}

public class constructor_in_inheritance {
    public static void main(String[] args) {
        // base1 b=new base1();

        derived d=new derived();
        
    }
}
