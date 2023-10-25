class c1{
    public int x=8;
    protected int y=9;
    int z=2;
    private int a=4;
    public void meth(){
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        System.out.println(a);
    }
}
class c2 extends c1{
    public void meth1(){
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        System.out.println(a);
    }
}

public class acess_modifier {
    public static void main(String[] args) {
        c1 c=new c1();
        // c.meth();


        System.out.println(c.x);
        System.out.println(c.y);
        System.out.println(c.z);
        // System.out.println(c.a);
        
    }
}
