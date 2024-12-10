package Day59;
import java.util.Scanner;

public class Streak{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt(); // no of days
            int[] a = new int[n];
            int[] b = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            for (int i = 0; i < n; i++) {
                b[i] = scanner.nextInt();
            }

            int maxStreakA = 0, currentStreakA = 0;
            int maxStreakB = 0, currentStreakB = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] != 0) {
                    currentStreakA++;
                    if (currentStreakA > maxStreakA) {
                        maxStreakA = currentStreakA;
                    }
                } else {
                    currentStreakA = 0;
                }

                if (b[i] != 0) {
                    currentStreakB++;
                    if (currentStreakB > maxStreakB) {
                        maxStreakB = currentStreakB;
                    }
                } else {
                    currentStreakB = 0;
                }
            }

            if (maxStreakA > maxStreakB) {
                System.out.println("Om");
            } else if (maxStreakB > maxStreakA) {
                System.out.println("Addy");
            } else {
                System.out.println("Draw");
            }
        }
        scanner.close();
    }
}
