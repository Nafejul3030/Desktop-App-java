import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int x;
		x = sc.nextInt();
		for (int i=1; i<=10; i++) {
			int a = i*x;
			System.out.println(i + " x " + x + " = " + a);
		}
	}

}
