import java.util.Scanner;

class myexcepiton extends Exception {
    String validage(int age){
        return "Not a valid age enterd by user : "+age;
    }
}

public class ExceptionClass {
    public static void main(String[] args) {
        int[] a = new int[4];
        a[0] = 3;
        a[1] = 4;
        a[2] = 6;
        a[3] = 9;

        // System.out.println("Enter index you want to access : ");
        Scanner sc = new Scanner(System.in);
        // int ind = sc.nextInt();

        System.out.println("Enter your age : ");
        int age=sc.nextInt();
        if(age<0 || age>125)
        {
            try{
                throw new myexcepiton();
            }
            catch(myexcepiton  e)
            {
                System.out.println(e.validage(age));
            }
        }
        else
        System.out.println("you enterd valid age " + age);


        // try {
        //     // System.out.println("value at given index is : " + a[ind]);
        //    ;
        // } catch (Exception e) {
        //     System.out.println("encounterd an exeception : "+e);
        // }

    }
}
