import java.util.Scanner;

class customexception extends Exception {
    String inavalidinput() {
        return "Invalid Input";

    }

    String divideby0() {
        return "cannot divide by o";
    }

    String maxinput() {
        return "Max input occurs";
    }

}

public class exercise6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a and b :");
        int a;
        int b;
        while (true) {
            try {
                a = sc.nextInt();
                b = sc.nextInt();
                if (a < -100000 || a > 100000 || b < -100000 || b > 100000)
                    throw new customexception();
                break;
            } catch (customexception e) {
                System.out.println(e.maxinput());
                System.out.println("Enter a and b again");
            }
        }
        System.out.println("Enter operator : ");
        char op;
        while (true) {
            try {
                op = sc.next().charAt(0);
                if ((op != '*') && (op != '/') && (op != '+') && (op != '-'))
                    throw new customexception();
                break;
            } catch (customexception e) {

                System.out.println(e.inavalidinput());
                System.out.println("Enter again : ");
            }
        }
        try {
            switch (op) {
                case '*' -> System.out.println(a * b);
                case '/' -> System.out.println(a / b);
                case '-' -> System.out.println(a + b);
                case '+' -> System.out.println(a - b);
                default -> System.out.println("none");
            }
        } catch (Exception e) {
            System.out.println("exception occur in switch case : " + e);
        }

    }
}
