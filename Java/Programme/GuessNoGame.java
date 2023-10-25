import java.util.Random;
import java.util.Scanner;

class Game {
    int random;
    int no_of_guess = 1;
    Scanner sc = new Scanner(System.in);
    int guess;
    Random ran = new Random();

    public Game() {

        random = ran.nextInt(101, 201);
    }

    public void guessno() {
        System.out.print("Guess the no between 101 to 200: ");

        while (true) {
            guess = sc.nextInt();
            if (guess <= 100 || guess > 200) {
                System.out.print("Enter valid no between 101 to 200: ");
                continue;
            } else if (guess > random) {
                System.out.println("Guessed no is larger than actual no");
            } else if (guess < random) {
                System.out.println("Guessed no is smaller than actual no");
            } else {
                System.out.println("You guessed Right no in :" + no_of_guess + " attempt");
                System.out.println("Game over thanks for playing!");
                break;
            }
            no_of_guess++;
            System.out.print("Guess no again: ");

        }
    }
}

public class GuessNoGame {
    public static void main(String[] args) {
        Game pl1=new Game();

        pl1.guessno();

    }
}
