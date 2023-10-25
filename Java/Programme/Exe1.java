import java.util.Scanner;

public class Exe1 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);

        System.out.println("Enter maximum marks");
        float max_marks$=input.nextFloat();

        System.out.println("Marks of hindi");
        float Hindi=input.nextFloat();
        System.out.println("Marks of English");
        float English=input.nextFloat();
        System.out.println("Marks of Maths");
        float Math=input.nextFloat();
        System.out.println("Marks of science");
        float science=input.nextFloat();
        System.out.println("Marks of social science");
        float sst=input.nextFloat();

        float percentage=((Hindi+English+Math+sst+science)/(max_marks$*5))*100;
        System.out.print("Percentage obtained is ");
        System.out.println(percentage);
        input.close();


    }
}
