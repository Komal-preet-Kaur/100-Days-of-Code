package Day78;
import java.util.Scanner;

class Codechef
{
	public static void main (String[] args) 
	{
	    Scanner sc= new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-- >0){
	        int n=sc.nextInt();
	        int [] arr=new int[n];
	        for(int i=0;i<n;i++){
	            arr[i]=sc.nextInt();
	        }
	        
	       // Frequency array
            int[] freq = new int[n + 1]; // N + 1 to handle 1-based indices
            for (int num : arr) {
                freq[num]++;
            }
            
            int maxFreq=0;      // to handle freqs
            int maxFreqCount=0; //to count max freq elements
            
            for(int i=1;i<=n;i++){
                if(freq[i]>maxFreq){
                    maxFreq=freq[i];
                    maxFreqCount=1;
                }
                else if(freq[i]==maxFreq){
                    maxFreqCount++;
                }
            }
            if(maxFreqCount==1){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
	    }
	}
}
