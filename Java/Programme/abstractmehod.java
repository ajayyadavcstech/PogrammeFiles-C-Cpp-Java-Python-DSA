import javax.swing.plaf.synth.SynthToolTipUI;

abstract class base_3{ //abstract class force to inherited classes to implement some methods
    public base_3(){
        // System.out.println("I am a base 3 construcor");
    }
    abstract public void greet();
}

class derived_3 extends base_3{ //concrete class
    @Override
    public void greet(){
        System.out.println("good morning");
    }
}
abstract class derived_3again extends base_3{ //abstract class
    
    public void th(){
        System.out.println("good morning");
    }
}
public class abstractmehod {
    public static void main(String[] args) {
        base_3 base=new derived_3();
        derived_3 derived=new derived_3();

        base.greet();
        derived.greet();

        
    }
    
}
