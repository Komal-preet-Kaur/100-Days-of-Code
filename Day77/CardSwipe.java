package Day77;

import java.util.Scanner;


public class CardSwipe
{
	public static void main (String[] args) 
	{
	    Scanner sc= new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-- >0){
	        int num=sc.nextInt();
	        int [] arr=new int[num];
	        for(int i=0;i<num;i++){
	            arr[i]=sc.nextInt();
	        }
	        boolean [] inside=new boolean[num+1]; // boolean array to track person ID (1 to N)
	        int maxPeople=0;
	        int currentPoeple=0;
	        for(int i=0;i<num;i++){
	            int id=arr[i];
	            
	            if(inside[id]){
	            inside[id]=false;   //exit
	            currentPoeple--;
	        }
	        else{
	            inside[id]=true;    //enter
	            currentPoeple++;
	        }
	        if(currentPoeple>maxPeople){
	            maxPeople=currentPoeple;
	        }
	        
	        }
	        System.out.println(maxPeople);
	        
	    }
        sc.close();
		
	}
}

