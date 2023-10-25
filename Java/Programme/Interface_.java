interface bicycle{
    int a=45;
    void applybrake(int decreament);
    void speedup(int increament);
}

interface nothing{
    void nothings();

}

class avoncycle implements bicycle ,nothing{
    public void applybrake(int decreament){
        System.out.println("apply brake");
    }
    public void speedup(int increament){
        System.out.println("speed up");
    }
    public void nothings(){
        System.out.println("nothing");
    }
}
public class Interface_ {
    public static void main(String[] args) {
        avoncycle cycle=new avoncycle();

        cycle.applybrake(3);
        cycle.speedup(4);
        cycle.nothings();

        System.out.println(cycle.a);
        
    }
}
