import java.util.Scanner;

public class nestedtrycatch {
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
            System.out.println("value of array is " + a[ind]);
            try {
                System.out.println("vaue divided by given no is :" + a[ind] / num);
            } catch (ArithmeticException e) {
                System.out.println("sorry this is an arithematic exception does not exist: " + e);
                System.out.println("exception in leval 2");
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("array index out of bound : " + e);
            System.out.println("exception in leval 2");

        }
        System.out.println("end of programme");
    }
}