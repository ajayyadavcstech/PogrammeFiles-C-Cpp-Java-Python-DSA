class mythread extends Thread{
    public mythread(String name){
        super(name);
        
    }
    public void run(){
        while (true) {
            System.out.println("I am running...."+getName());
        }
    }
}

public class threadpriority {
    public static void main(String[] args) {
        mythread t1=new mythread("t1(min priority");
        mythread t2=new mythread("t2");
        mythread t3=new mythread("t3");
        mythread t4=new mythread("t4(max priority)");
        mythread t5=new mythread("t5");
        t4.setPriority(Thread.MAX_PRIORITY);
        t1.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();

        System.out.println(t1.getPriority());
        System.out.println(t2.getPriority());
        System.out.println(t3.getPriority());
        System.out.println(t4.getPriority());
        System.out.println(t5.getPriority());
        
    }
}
