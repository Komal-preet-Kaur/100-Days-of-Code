package Day88;

import java.util.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-- >0){
	    int n=sc.nextInt();
	    int []arr=new int[n];
	    for(int i=0;i<n;i++){
	        arr[i]=sc.nextInt();
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(i>0 && arr[i]!=arr[i-1]){
	            count++;
	        }
	        else if(i<n-1 && arr[i]!=arr[i+1]){
	            count++;
	        }
	    }
	    System.out.println(count);
	    
	    }
        sc.close();
	}
}
