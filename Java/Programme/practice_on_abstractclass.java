import javax.swing.plaf.synth.SynthOptionPaneUI;

abstract class pen {
    abstract public void write();

    abstract public void refill();
}

class concrete extends pen {
    public void changenib() {
        System.out.println("Changing nib of pen");

    }

    public void write() {
        System.out.println("writing with pen");
    }

    public void refill() {
        System.out.println("refilling pen");
    }
}

class monkey {
    public void jump() {
        System.out.println("jump monkey");
    }

    public void bite() {
        System.out.println("biting monkey");
    }
}

interface basicanimal {
    void eat();

    void sleep();
}

class human extends monkey implements basicanimal {
    public void eat() {
        System.out.println("eating....");

    }

    public void sleep() {
        System.out.println("sleeping....");
    }

    public void speak() {
        System.out.println("speaking...");
    }

    public void bite() {
        System.out.println("biting human....");
    }
}

abstract class telephone {
    abstract public void ring();

    abstract public void lift();

    abstract public void disconnect();

}
class smartphones extends telephone{
     public void ring(){
        System.out.println("ring...");
    }

     public void lift(){
        System.out.println("lift...");
     }

     public void disconnect(){
        System.out.println("disconnect...");
     }
     public void clickpic(){
        System.out.println("clickpic...");
     }
}

interface tvremote{
    void changechannel();

}

interface smarttv extends tvremote{
    void livevidio();
}

class tv implements smarttv{
    public void changechannel() {
        System.out.println("changing channel....");
    }
    public void livevidio() {
        System.out.println("live vidio.....");
    }
}

public class practice_on_abstractclass {
    public static void main(String[] args) {
        // concrete c=new concrete();
        // c.changenib();

        // human h=new human();
        // h.eat();
        // h.sleep();
        // h.jump();
        // h.bite();
        // h.speak();

        // monkey m = new human();
        // m.bite();
        // m.jump();

        // telephone t=new smartphones();
        // t.disconnect();
        // t.lift();
        // t.ring(); 

        tv v=new tv();
        v.changechannel();
        v.livevidio();
    }

}
