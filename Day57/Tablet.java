import java.util.Scanner;


public class Tablet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            int n = sc.nextInt(); //no of tabs
            int b = sc.nextInt();//budget
            int maxArea = -1;

            for (int i = 0; i < n; i++) {
                int w = sc.nextInt();
                int h = sc.nextInt();
                int p = sc.nextInt();

                if (p <= b && w * h > maxArea) {
                    maxArea = w * h;
                    
                }

            }

            if (maxArea == -1) {
                System.out.println("no tablet");
            } else {
                System.out.println(maxArea);
            }
        }
        sc.close();
    }
}
