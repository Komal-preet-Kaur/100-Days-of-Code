import java.util.*;
public class Mahasena
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int countLucky=0;
		int countUnlucky=0;
		for(int i=0;i<n;i++){
		    if(arr[i]%2==0){
		        countLucky++;
		    }
		    else{
		        countUnlucky++;
		    }
		}
		if(countLucky>countUnlucky){
		    System.out.println("READY FOR BATTLE");
		}
		else{
		    System.out.println("NOT READY");
		}
		sc.close();
	}
}
