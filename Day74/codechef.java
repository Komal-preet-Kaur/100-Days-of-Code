import java.util.Scanner;
class Codechef
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		if(n<8){
		    System.out.println("Less");
		}
		else if(n==8){
		    System.out.println("Perfect");
		}
		else{
		    System.out.println("More");
		}
		sc.close();
	}

}
