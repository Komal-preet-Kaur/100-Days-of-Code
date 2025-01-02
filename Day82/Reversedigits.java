import java.util.Scanner;
public class Reversedigits {
    public static void main(String[] args) {
        System.out.println("Enter the number:");
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int ans=0;
        int rem=0;
        if(num==0){
            ans=0;
            System.out.print("By reversing we get "+ ans);
        }
        else{
            while(num !=0){
                rem=num%10;
                num=num/10;
                ans=(ans*10)+(rem);              
            }
        }
        System.out.print("By reversng we get the number as : "+ans);
        sc.close();
    }
}
