import java.util.Scanner;
public class Sports
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int x =sc.nextInt();   //no. of pages
		if(x>=1 &&x<=7){
		   System.out.println("NO");
		}
		else{
		    System.out.println("YES");
		}
		sc.close();

	}
}
