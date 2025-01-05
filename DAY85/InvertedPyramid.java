import java.util.Scanner;

public class InvertedPyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();  // Read the number of rows
        for (int i = r; i >= 1; i--) {
            for (int j = 0; j < r - i; j++) {    // Printing spaces
                System.out.print(" ");
            }
            for (int k = (2 * i) - 1; k >= 1; k--) { // Printing stars
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
