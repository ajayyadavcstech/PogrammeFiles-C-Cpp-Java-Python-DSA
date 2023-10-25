import javax.swing.text.rtf.RTFEditorKit;

public class methods {
    static int logic(int a, int b) // static means it share to every class
    {
        return a + b;
    }

    static int logic(int a) { // method overloading
        return a * 5;
    }

    static void logic(String a) {
        System.out.println(a);
    }

    public static void main(String[] args) {
        int c = logic(4, 5);
        System.out.println(c);

        // methods obj = new methods();
        // int d = obj.logic(4, 8);
        // System.out.println(d);

        System.out.println(logic(4));
        System.out.println(logic(4, 8));
        logic("ajju bro");


    }
}
