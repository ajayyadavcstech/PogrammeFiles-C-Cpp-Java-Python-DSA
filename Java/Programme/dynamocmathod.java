class phone{
    int a=4;

    public void on(){
        System.out.println("on the phone");
    }
    public void tourchon(){
        System.out.println("on the tourch");
    }

}
class smartphone extends phone{
    
    public void on(){
        System.out.println("on the smartphone");
        
    }
    public void screenon(){
        System.out.println("on the screen");
    }

}

public class dynamocmathod {
    public static void main(String[] args) {
        // phone obj1=new phone();
        // obj1.on();
        // obj1.tourchon();

        // smartphone obj2=new smartphone();
        // obj2.on();
        // obj2.screenon();
        // obj2.tourchon();

        phone obj3=new smartphone();
        obj3.tourchon();
        obj3.on();

        
    }
}
