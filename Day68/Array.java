import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.Collections;

public class Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();  // Number of test cases

        while (t-- > 0) {
            int n = sc.nextInt();  // Size of array
            int[] arr = new int[n];
            Map<Integer, Integer> freqMap = new HashMap<>();

            // Populate the array and frequency map
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                freqMap.put(arr[i], freqMap.getOrDefault(arr[i], 0) + 1);
            }

            // Find the maximum frequency
            int maxFreq = Collections.max(freqMap.values());

            // Calculate the minimum operations needed
            int minOperations = n - maxFreq;

            System.out.println(minOperations);
        }

        sc.close();
    }
}
