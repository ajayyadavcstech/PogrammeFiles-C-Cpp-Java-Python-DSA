import javax.swing.DefaultBoundedRangeModel;

import ajay.print.publicclass;
// import ajay.print.defaultclass;

class a extends publicclass {
    void print() {
        // System.out.println(a);
        System.out.println(b);
        // System.out.println(c);
        System.out.println(d);

    }

    void printmethods() {
        // printdefault();
        printprotected();
        printpublic();
    }
}

public class packagesusing {  
    public static void main(String[] args) {
        publicclass p = new publicclass();
        // System.out.println(p.a); // default
        System.out.println(p.b);
        // System.out.println(p.d); //protected
        // System.out.println(p.c); //private

        // defaultclass d=new defaultclass();
        // System.out.println(d.a);

        // p.printdefault();
        p.printpublic();
        // p.printprivate();
        // p.printprotected();

        a c = new a();
        c.print();

        c.printmethods();

    }
}
