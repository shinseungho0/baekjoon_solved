import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		long a = scanner.nextInt();
		long b = scanner.nextInt();
		long c = a - b;
		if (c < 0) System.out.print(c * -1);
		else System.out.print(c);
	}
}