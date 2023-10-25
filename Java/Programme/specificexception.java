import java.util.Scanner;

public class specificexception {
    public static void main(String[] args) {
        int[] a = new int[4];
        for (int i = 0; i < a.length; i++) {
            a[i] = i + 9;
        }
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array index to print");
        int ind = sc.nextInt();

        System.out.println("Ente the no you want to divide with :");
        int num = sc.nextInt();

        try {
            System.out.println("The value of array is :" + a[ind]);
            System.out.println("The value of array value/number is :" + a[ind] / num);
        } catch (ArithmeticException e) {
            System.out.println("an Arithematic exception occur :" + e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("an arrayindex out of bound occur :" + e);
        } catch (Exception e) {
            System.out.println("some other exception occurs :" + e);
        }

        System.out.println("End of programme");
    }
}
