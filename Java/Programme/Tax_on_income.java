import java.util.Scanner;

import javax.lang.model.util.ElementScanner14;

public class Tax_on_income {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter salary of Employee");
        int income=sc.nextInt();
        
        if (income<=250000) {
            System.out.println("tax: "+0);
            System.out.println("final income: "+income);
        }
        else if (income<=500000) {
            float tax=((float)income-250000)*5/100;
            System.out.println("tax: "+tax);
            System.out.println("final income: "+(income-tax));

        }
        else if (income<=1000000) {
            float tax=12500+((float)income-500000)*20/100;
            System.out.println("tax: "+tax);
            System.out.println("final income: "+(income-tax));
        }
        else 
            {
                float tax=112500+((float)income-1000000)*30/100;
                System.out.println("tax: "+tax);
                System.out.println("final income: "+(income-tax));

            }


    }
}
