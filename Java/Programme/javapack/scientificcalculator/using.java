// import cal.hybrid; -->throw error
import cal.calculator;
import java.util.Scanner;

public class using {
    public static void main(String[] args) {
        calculator c=new calculator();
        c.calculator(1, 6);

        // hybrid h=new hybrid(); -->throw error
        // h.hybrid(1, 5);

        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println(a);


    }
}
