import java.util.*;

public class arraylist {
    public static void main(String[] args) {
        ArrayList<Integer> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList();
        l2.add(89);
        l2.add(49);
        for (Integer integer : l2) {
            System.out.print(integer + " ");

        }

        l1.add(6); // add element at last index
        l1.add(3);
        l1.add(5);
        l1.add(7);
        // for (Integer integer : l1) {
        //     System.out.print(integer + " ");
        // }
        System.out.println();
        l1.add(0, 3); // add element at index 0
        for (int i = 0; i < l1.size(); i++) {
            System.out.print(l1.get(i) + " ");
        }
        System.out.println();

        l1.addAll(0,l2);
        for (Integer integer : l1) {
            System.out.print(integer+" ");
            
        }
        System.out.println();
        // l1.clear();
        System.out.println(l1.contains(7));
        // System.out.println();
        System.out.println(l1.size());
        l1.add(8);
        l1.add(5);
        l1.add(0);
        System.out.println(l1.size());
        l1.add(99);
        System.out.println(l1.size());

    }
}
