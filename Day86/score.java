package Day86;

import java.util.*;
public class score
{
	public static void main (String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    
	    while(t-- >0){
	        int n=sc.nextInt();
	        int []maxScore=new int[8];
	        while(n-- >0){
	            int p=sc.nextInt();
	            int s=sc.nextInt();
	            if(p>=1 && p<=8){   //ek array mein store karenge 
	                maxScore[p-1]=Math.max(maxScore[p-1],s);   //kyunki indexing 0 se shuru hoti hai but humene 1-8 define kiya hai array 
	            }
	        }
	        int score=0;
	        for(int i=0;i<8;i++){
	            score+=maxScore[i]; //maxscore array k har element ko add kardo 
	        }
	        System.out.println(score);
	    }
	    System.out.println();
		sc.close();
	}
}

