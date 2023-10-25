import java.text.CharacterIterator;

interface sample{
    void meth1();
    void meth2();
}
interface childsample extends sample{
    
    void meth3();
    void meth4();
}

class pare implements sample{
    public void meth1(){
        System.out.println("I am sample math1");
    }
    public void meth2(){
        System.out.println("I am sample math2");
    }
}
class parent9 implements childsample{
    public void meth1(){
        System.out.println("I am childsample math1");
    }
    public void meth2(){
        System.out.println("I am childsample math2");
    }
    public void meth3(){
        System.out.println("I am childsample math3");
    }
    public void meth4(){
        System.out.println("I am childsample math4");
    }
}



public class inheritance_in_interface {
    public static void main(String[] args) {
        pare a=new pare();
        a.meth1();
        a.meth2();

        parent9 b=new parent9();
        b.meth1();
        b.meth2();
        b.meth3();
        b.meth4();
    }
}
