import java.util.Scanner;

public class ReverseandCompare
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0){
            int num=sc.nextInt();
              int originalNum=num;
             int rev=0;
            while(num !=0){
                int x=num%10;
                rev=rev*10;
                rev=rev+x;
                num=num/10;
            }
            if(originalNum==rev){
                System.out.println("Equal");
            }
            else{
                System.out.println("Not Equal");
            }
        }
        sc.close();
        
    }
}