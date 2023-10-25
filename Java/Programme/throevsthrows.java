import java.util.Scanner;

class excep extends Exception {
    String negativeradius() {
        return "You enterd negative radius";
    }
}

public class throevsthrows {
    static double area(int radius) throws excep {
        if (radius < 0)
            throw new excep();
        return Math.PI * radius * radius;
    }

    public static void main(String[] args) {
        System.out.print("Enter radius of circle : ");
        Scanner sc = new Scanner(System.in);

        int radius = sc.nextInt();
        try {
            double area = area(radius);

            System.out.println(area);
        } catch (excep e) {
            System.out.println("hit the exception : " + e.negativeradius());
        }

    }
}
