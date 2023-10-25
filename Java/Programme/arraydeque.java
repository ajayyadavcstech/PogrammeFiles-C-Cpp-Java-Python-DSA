import java.util.ArrayDeque;
import java.util.HashSet;

public class arraydeque {
    public static void main(String[] args) {
        ArrayDeque <Integer> l1=new ArrayDeque<>();
        l1.add(9);
        l1.add(0);
        l1.add(8);  
        l1.add(8);  
        System.out.println(l1.getFirst());
        System.out.println(l1.getLast());
        System.out.println(l1);

        HashSet <Integer> l2=new HashSet<>(l1);
        System.out.println(l2);
        l2.add(8);
        l2.add(1);
        System.out.println(l2);


    }
}
