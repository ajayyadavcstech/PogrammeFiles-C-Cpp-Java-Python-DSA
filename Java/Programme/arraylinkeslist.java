import java.util.LinkedList;

public class arraylinkeslist {
    public static void main(String[] args) {
        LinkedList<Integer> l1=new LinkedList<>();
        l1.add(9);
        l1.add(3);
        System.out.println(l1.size());
        // for (Integer integer : l1) {
        //     System.out.print(integer+" ");
        // }

        for (int i = 0; i < l1.size(); i++) {
            System.out.print(l1.get(i)+" ");
        }

    }
}
