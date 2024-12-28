import java.util.Scanner;

public class Magic
{
	public static void main (String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-- >0){
		    int n=sc.nextInt();
		    int x=sc.nextInt();
		    int s=sc.nextInt();
		    while(s--> 0){
		        int a=sc.nextInt();
		        int b=sc.nextInt();
		        
		        if(x==a){
		            x=b;
		        }
		        else if(x==b){
		            x=a;
		        }
		        
		    }
		    System.out.println(x);
		    
		}
sc.close();
	}
}
