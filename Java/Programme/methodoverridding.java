class A{
    public void print(){
        System.out.println("I am inside a class");
    }
}
class B extends A{
    @Override
    public void print(){
        System.out.println("I am inside b class");
    }
}

public class methodoverridding {
    public static void main(String[] args) {

        A a=new A();
        a.print();

        B b=new B();
        b.print();
        
    }
}
