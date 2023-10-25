import java.util.Scanner;
public class Condition {
    public static void main(String[] args) {
        int age=2;

        //if else statements

        // if (age>16) {
        //     System.out.println("you can drive");
        // }
        // else
        // System.out.println("you can't drive");
        
        // switch (age) {    //if we have some choise then we use switch
        //     case 18:
        //         System.out.println("you are going to become adult!");
        //         break;
        //     case 8:
        //         System.out.println("you are a kid");
        //         break;
        //     case 30:
        //         System.out.println("you are going to join job");
        //         break;
            
        //     case 50:
        //         System.out.println("you are retired");
        //         break;
        
        //     default:
        //         System.out.println("Enjoy your life");
        //         break;
            
        // }


                //Here there is a concept of enhance switch
        switch(age){  //In this we not have to use switch every time
            case 8 ->System.out.println("you are kid");
            case 18->System.out.println("you are adult");
            case 55->System.out.println("you are retired");
            case 60 ->System.out.println("yoy are aged");
            default ->{
                System.out.println("Enjoy every aged persion");
                System.out.println("Hello you can write multiple line in enhance switch like this");
            }
        }
        

    }
}
