import ajay_yadav.packages.c1;
class c2 extends c1{
    public void meth1(){
        System.out.println(x);
        System.out.println(y);
        // System.out.println(z);
        // System.out.println(a);
    }
}

public class acess_modifier {
    public static void main(String[] args) {
        c1 c=new c1();
        // c.meth();


        System.out.println(c.x);
        // System.out.println(c.y);
        // System.out.println(c.z);
        // System.out.println(c.a);
        
    }
}
