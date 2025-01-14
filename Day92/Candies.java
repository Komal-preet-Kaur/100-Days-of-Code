import java.util.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 
        while (T-- > 0) {
            int N = sc.nextInt();  
            int[] arr = new int[2 * N];  

            for (int i = 0; i < 2 * N; i++) {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);

            // Flag to check if prices are valid
            boolean valid = true;

            // Check if any price appears more than twice in the sorted array
            for (int i = 1; i < 2 * N; i++) {
                if (arr[i] == arr[i - 1]) {  // duplicate found
                   
                    int count = 1;
                    while (i < 2 * N && arr[i] == arr[i - 1]) {
                        count++;
                        i++;
                    }
                  
                    if (count > 2) {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
        sc.close();
    }
}
