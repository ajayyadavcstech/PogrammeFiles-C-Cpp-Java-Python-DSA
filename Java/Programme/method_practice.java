import javax.swing.plaf.synth.SynthOptionPaneUI;

public class method_practice {

    static void multiplication(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " * " + i + " = " + (n * i));
        }
    }

    static void pattern(int n) {
        if (n == 0)
            return;

        for (int i = 1; i <= n; i++) {
            System.out.print("* ");
        }
        System.out.println();
        pattern((n - 1));

    }

    static void patternrev(int n) {

        if (n == 0)
            return;
        patternrev((n - 1));

        for (int i = 1; i <= n; i++) {
            System.out.print("* ");
        }
        System.out.println();
    }
    static float celsiustofarhengeiht(Float c)
    {
        return 9f/5*c+32;
    }

    public static void main(String[] args) {
        // multiplication((9));

        // patternrev(4);

        System.out.println(celsiustofarhengeiht(0f));
    }
}
