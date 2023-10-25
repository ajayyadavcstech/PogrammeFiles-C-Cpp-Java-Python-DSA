import java.util.Random;
import java.util.Scanner;

import javax.lang.model.util.ElementScanner14;

public class Rock_paper_scesser {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter among one {Rock  Scissor  Paper} ");
        String inp = sc.next();

        Random ran = new Random();

        int com_ran = ran.nextInt(3);
        String com;
        if (com_ran == 0) {
            com = "Scissor";
        } else if (com_ran == 1) {
            com = "Rock";
        } else
            com = "Paper";
        if (com.equals(inp)) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("draw");
        } else if (com.equals(("Rock")) && inp.equals("Paper")) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("You Won");
        } else if (com.equals("Rock") && inp.equals("Scissor")) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("You Loose");
        } else if (com.equals("Paper") && inp.equals("Rock")) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("You Loose");
        } else if (com.equals("Paper") && inp.equals("Scissor")) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("You Won");
        } else if (com.equals("Scissor") && inp.equals("Paper")) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("You Loose");
        } else if (com.equals("Scissor") && inp.equals("Rock")) {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("You Won");
        } else {
            System.out.println("Computer Input " + com);
            System.out.println("Your Input " + inp);
            System.out.println("Enter currect Element ");
        }

    }
}
