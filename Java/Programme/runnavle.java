class mythreadrunnable1 implements Runnable {
    public void run() {
        int i = 0;
        while (i < 1000) {
            System.out.println("I am a thread 1");
            i++;

        }
    }
}

class mythreadrunnable2 implements Runnable {
    public void run() {
        int i = 0;
        while (i < 1000) {
            System.out.println("I am a thread 2");
            i++;

        }
    }
}

public class runnavle {
    public static void main(String[] args) {
        mythreadrunnable1 bullet1=new mythreadrunnable1();
        Thread gun1=new Thread(bullet1);  //New state

        mythreadrunnable2 bullet2=new mythreadrunnable2();
        Thread gun2=new Thread(bullet2);

        gun1.start();   //Runnable

        gun2.start();

        System.out.println("hii");

    }
}
