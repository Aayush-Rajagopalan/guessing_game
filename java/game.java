import java.util.Scanner;

public class Main {
    public public static void Guess() {
        Scanner sc = new Scanner(System.in);

        int number = 1 + (int) (Math.random() * 100);

        int i,guess;

        System.out.println("Guess a number between 1 and 100");

        for (i = 0; i <= 100; i++) {
            guess = sc.nextInt();
            if (guess == number) {
                System.out.println("You guessed it right!");
                break;
            } else if (guess > number) {
                System.out.println("Your guess is too high");
            } else {
                System.out.println("Your guess is too low");
            }
        }
    }
    public static void main(String[] args) {
        Guess();
    }
}