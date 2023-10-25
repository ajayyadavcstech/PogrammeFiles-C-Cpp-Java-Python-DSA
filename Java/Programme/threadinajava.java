class usingthread extends Thread {

    public void run() {
        int i=0;
        while (i<100) {
            System.out.println("Running thread 1");
            i++;
        }
    }
}

class usingthread1 extends Thread {
    public void run() {
        int i=0;
       while (i<100) {
            System.out.println("Running thread 2");
            i++;
       }
    }
}

class usingrunnable1 implements Runnable{
    public void run(){
        int i=0;
        while (i<100) {
            System.out.println("Running runnable 1");
            i++;
        }
    }
}
class usingrunnable2 implements Runnable{
    public void run(){
        int i=0;
        while (i<100) {
            System.out.println("Running runnable 2");
            i++;
        }
    }
}

public class threadinajava {
    public static void main(String[] args) {
        // usingthread t1=new usingthread();
        // usingthread1 t2=new usingthread1();

        // t1.start();
        // t2.start();

        usingrunnable1 bullet1=new usingrunnable1();
        Thread gun1=new Thread(bullet1);

        usingrunnable2 bullet2=new usingrunnable2();
        Thread gun2=new Thread(bullet2);

        gun1.start(); //we have to use sart method to run this thread separately
        gun2.start();

        

    }
}
