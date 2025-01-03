import java.util.Scanner;
public class MovieWeekend
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-- >0){
		    int n=sc.nextInt(); //n movies to watch
		    int[] l=new int[n]; //len of movies
		    int [] r=new int[n]; //ratings of movies
		    
		    for( int i=0;i<n;i++){
		        l[i]=sc.nextInt();
		    }
		    for(int i=0;i<n;i++){
		        r[i]=sc.nextInt();
		    }
		    
		    int maxIndex=0;
		    int maxProduct=l[0]*r[0];
		    int maxRating=r[0];
		    for(int i=1;i<n;i++){
		        int product=l[i]*r[i];
		        if(product >maxProduct || product==maxProduct
		        && r[i]>maxRating || product==maxProduct 
		        && r[i]==maxRating && i<maxIndex){
		            maxIndex=i;
		            maxProduct=product;
		            maxRating=r[i];
		        }
		    }
		  System.out.println(maxIndex+1);
		}
		sc.close();
	}
}
