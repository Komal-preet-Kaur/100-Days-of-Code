import java.util.Scanner;

public class Codechef
{
	public static void main (String[] args) 
	{
	    Scanner scanner = new Scanner(System.in);

        // Read the number of test cases
        int T = scanner.nextInt();
        StringBuilder results = new StringBuilder();

        for (int t = 0; t < T; t++) {
            int D = scanner.nextInt();
            String N = scanner.next();

            boolean isPossible = false;

            // Check each digit of the number
            for (int i = 0; i < D; i++) {
                char digit = N.charAt(i);
                if (digit == '0' || digit == '5') {
                    isPossible = true;
                    break;
                }
            }

            if (isPossible) {
                results.append("Yes\n");
            } else {
                results.append("No\n");
            }
        }

        System.out.print(results);

        scanner.close();
	}
}
