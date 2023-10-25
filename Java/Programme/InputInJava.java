import java.util.Scanner;

public class InputInJava {
    public static void main(String[] args) {
        System.out.println("Taking Input From User!");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no 1");
        int a = sc.nextInt();
        System.out.println("Enter no 2");
        int b = sc.nextInt();
        System.out.println(a + b);
        sc.close();

    }
}
