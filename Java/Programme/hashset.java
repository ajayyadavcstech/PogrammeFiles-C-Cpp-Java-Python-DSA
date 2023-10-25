import java.util.HashSet;

public class hashset {
    public static void main(String[] args) {
        HashSet <Integer> l1=new HashSet<>();
        l1.add(9);
        l1.add(9);
        l1.add(8);
        System.out.println(l1); //print all set 

        HashSet <Integer> l2=new HashSet<>(l1);
        System.out.println(l2);
        l2.add(8);
        l2.add(1);
        
        System.out.println(l2);


    }
}
