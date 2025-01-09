package Day89;
import java.util.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-- >0){
		    int n=sc.nextInt(); //people
		    int k=sc.nextInt(); //total money units 
		    while(n-- >0){
		        int amt=sc.nextInt();
		        if(amt<=k){
		            System.out.print("1");
		            k=k-amt;
		        }
		        else if(amt>k){
		            System.out.print("0");
		        }
		        
		    }
		    System.out.println();
		}
        sc.close();

	}
}
