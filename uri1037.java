import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        double x = 0;

        Scanner sc = new Scanner(System.in);
        x = sc.nextDouble();

        if (x >= 0 && x <= 100) {
            if (x >= 0 && x <= 25.0000) {
                System.out.printf("Intervalo [0,25]\n");
            } else if (x >= 25.00001 && x <= 50.0000000) {
                System.out.printf("Intervalo (25,50]\n");
            } else if (x >= 50.00000001 && x <= 75.000000000) {
                System.out.printf("Intervalo (50,75]\n");
            } else if (x >= 75.0000000001 && x <= 100.000000000) {
                System.out.printf("Intervalo (75,100]\n");
            }
        } else {
            System.out.printf("Fora de intervalo\n");
        }
    }
}
