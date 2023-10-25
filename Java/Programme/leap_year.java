import java.util.Scanner;

public class leap_year {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter year");
        int year=sc.nextInt();

        if ((year%4==0 && year%100!=0) || year%400==0) {
            System.out.println("Entered year is a leap year which have 366 days one extra days in feb(29 days)");
            
        }
        else
            System.out.println("Entered year is not a leap year ");
    }
}
