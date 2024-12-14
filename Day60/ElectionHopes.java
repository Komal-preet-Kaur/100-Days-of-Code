import java.util.Scanner;

public class ElectionHopes
{
	public static void main (String[] args) 
	{
		Scanner sc= new Scanner(System.in);
		int x= sc.nextInt();
		int y=sc.nextInt();
		
		if(x>=(2*y)){
		    System.out.println("Yes");
		}
		else{
		    System.out.println("No");
		}
	}
}
