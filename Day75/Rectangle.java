package Day75;

import java.util.Scanner;

public class Rectangle
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); 
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();
            
            int[] sides = {a, b, c, d};
            Arrays.sort(sides);
            
            if (sides[0] == sides[1] && sides[2] == sides[3]) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
