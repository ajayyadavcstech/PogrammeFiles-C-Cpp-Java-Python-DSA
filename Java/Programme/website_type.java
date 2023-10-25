import java.util.Scanner;

public class website_type {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter website name");
        String website=sc.next();

        if (website.endsWith(".org")) {
            System.out.println("This is a orgnisational website");
            
        }
        else if (website.endsWith(".in")) {
            System.out.println("Indian website");

            
        }
        else if (website.endsWith(".com")) {
            System.out.println("Commercial website");

            
        }
        else 
            System.out.println("Not a proper website");
    }
}
