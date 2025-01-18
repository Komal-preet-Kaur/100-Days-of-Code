import java.util.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    
	    while(t-- >0){
	        int l=sc.nextInt();
	        int r=sc.nextInt();
	        int prettyNum=0;
	        for(int i=l;i<=r;i++){
	            if(i%10 ==2 || i%10 ==3 || i%10 == 9){
	                prettyNum++;
	            }
	        }
	        System.out.println(prettyNum);
	    }
	    sc.close();
	}
}