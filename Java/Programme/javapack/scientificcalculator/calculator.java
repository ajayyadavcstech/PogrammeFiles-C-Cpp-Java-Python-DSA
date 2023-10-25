package cal;

public class calculator {
    public void calculator(int a, int b) {
        System.out.println(a + b);

    }
}

class sccalculator {
    public void sccalculator(int a, int b) {
        System.out.println(Math.sin(a + b));
    }
}

class hybrid {
    public void hybrid(int a, int b) {
        System.out.println(a + b);
        System.out.println(Math.sin(a + b));

    }
}
class hybridchild extends calculator{
    public void hybrid(int a, int b) {
        calculator(a, b);
        System.out.println(Math.sin(a + b));

    }
}