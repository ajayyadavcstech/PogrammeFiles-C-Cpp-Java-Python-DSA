class usingThread extends Thread{
    public usingThread(Runnable r,String name){
        super(r,name);


    }
    // public void run(){
    //     System.out.println("I am thread running....");
    // }
}



public class constructor_in_thread {
    public static void main(String[] args) {
        // usingThread t=new usingThread();

        // t.start();
        // System.out.println(t.getId());  
        // System.out.println(t.getName());
        // System.out.println(t.getState());
        // System.out.println(t.getThreadGroup());
        // System.out.println(t.getClass());

        // usingThread t1=new usingThread("ajay");
        // usingThread t2=new usingThread("aju");
        // t1.start();
        // System.out.println(t1.getId());
        // System.out.println(t1.getName());
        // System.out.println(t1.getPriority());
        // System.out.println(t1.getState());
        // int a=6;
        // t2.start();
        // System.out.println(t2.getId());
        
        Runnable r=new Runnable() {
            public void run(){
                System.out.println("I am runnable running...");
                
            }
        };

        usingThread t=new usingThread(r, "ajay");
        t.start();
        System.out.println(t.getId());
        System.out.println(t.getName());
        System.out.println(t.getState());
        System.out.println("priority " +t.getPriority());
        
        
        
    } 
}
