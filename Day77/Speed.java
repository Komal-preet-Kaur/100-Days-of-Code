package Day77;

import java.util.Scanner;
public class Speed
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int s=sc.nextInt();
		if(s<=40){
		    System.out.println("No");
		}
		else{
		    System.out.println("Yes");
		}
        sc.close();
	}
}

