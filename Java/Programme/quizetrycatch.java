import java.util.Scanner;

public class quizetrycatch {
    public static void main(String[] args) {
        int[] a = new int[3];

        a[0] = 8;
        a[1] = 3;
        a[2] = 9;
        System.out.println("Ente index you want to access : ");
        Scanner sc = new Scanner(System.in);

        while (true) {
            int ind = sc.nextInt();
            try {
                System.out.println("value at entered index is : " + a[ind]);
                break;
            } catch (Exception e) {
                System.out.println("you encoundered an exception : " + e);
            }
            System.out.println("Enter index again : ");

        }
        System.out.println("End of programme ");
    }
}
