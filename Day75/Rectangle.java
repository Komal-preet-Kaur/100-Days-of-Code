package Day75;

import java.util.Scanner;
import java.util.Arrays; // Import statement for Arrays class

public class Rectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt(); // Number of test cases
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();
            
            int[] sides = {a, b, c, d};
            Arrays.sort(sides); // Sort the array of sides
            
            // Check if the smallest two sides are equal and the largest two sides are equal
            if (sides[0] == sides[1] && sides[2] == sides[3]) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
        sc.close(); // Close the scanner
    }
}
