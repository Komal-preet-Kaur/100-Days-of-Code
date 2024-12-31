import java.util.Scanner;

public class MoodyChef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int N = sc.nextInt();
            int l = sc.nextInt();
            int r = sc.nextInt();
            
            int[] arr = new int[N];
            for (int i = 0; i < N; i++) {
                arr[i] = sc.nextInt();
            }
            
            int maxHappiness = 0;
            int minHappiness = 0;
            int currentHappiness = 0;
            
            for (int i = 0; i < N; i++) {
                if (arr[i] >= l && arr[i] <= r) {
                    currentHappiness++;
                } else {
                    currentHappiness--;
                }
                
              maxHappiness = Math.max(maxHappiness, currentHappiness);    //math.max gives larger of the two values
                minHappiness = Math.min(minHappiness, currentHappiness);
            }

            System.out.println(maxHappiness + " " + minHappiness);
        }

        sc.close();
    }
}
