package Day94;

import java.util.*;

public class Digits
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		sc.nextLine();
		while(t-- >0){
		    String s=sc.nextLine();
		    int CountZeroes=0;
		    int CountOnes=0;
		    for(int i=0;i<s.length();i++){
		        if(s.charAt(i)=='0'){
		            CountZeroes++;
		        }
		        else{
		            CountOnes++;
		        }
		    }
		    if(CountZeroes == 1 ||CountOnes== 1){
		        System.out.println("yes");
		    }
		    else{
		        System.out.println("No");
		    }
		}
		sc.close();
		    
		}

	}

