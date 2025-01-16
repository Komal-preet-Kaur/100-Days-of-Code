package Day96;

import java.util.*;

class LongestCommonPattern {
    public static int[] getFreqArray(String s) {
        int freq[] = new int[256];
        for (char ch : s.toCharArray()) {
            freq[ch]++;
        }
        return freq;
    }

    public static int getCommonLength(int[] freqA, int[] freqB) {
        int commonLength = 0;
        for (int i = 0; i < 256; i++) {
            commonLength += Math.min(freqA[i], freqB[i]);
        }
        return commonLength;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); 
        while (t-- > 0) {
            String A = sc.nextLine();
            String B = sc.nextLine();
            int[] freqA = getFreqArray(A);
            int[] freqB = getFreqArray(B);
            int commonLength = getCommonLength(freqA, freqB);
            System.out.println(commonLength);
        }
        sc.close();
    }
}
