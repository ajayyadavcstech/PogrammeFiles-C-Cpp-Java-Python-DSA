import java.util.Scanner;

public class practiceeroorsandtrycatch {
    public static void main(String[] args) {
        // problem 1:
        // int a=3 //syntax error

        // int age=78;
        // int year_born=2000-78;//logical error

        // System.out.println(8/0);//runtime error

        // problem 2:

        // try {
        // int a=8/0;
        // } catch (IllegalArgumentException e) {
        // System.out.println("HiiHii");

        // }
        // catch(ArithmeticException e){
        // System.out.println("HaaHaa");

        // }

        // problem 3:
        int[] a = new int[4];
        a[0] = 9;
        a[1] = 4;
        a[2] = 5;
        a[3] = 6;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter index you want to access : ");
        int ind;
        int i = 0;

        while (true) {

            try {
                ind = sc.nextInt();
                i++;
                System.out.println(a[ind]);
                break;

            } catch (Exception e) {
                System.out.println("we got an exception : " + e);

            }
            if (i == 5) {
                System.out.println("You used your all 5 input");
                break;
            }

            System.out.print("you enterd wrong index enter again : ");
        }
        System.out.println("end of programme");

    }
}
