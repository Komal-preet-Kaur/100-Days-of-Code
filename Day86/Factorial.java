package Day86;
import java.util.Scanner;

public class Factorial {
    public static int Fact(int x){
        int f=1;
        if(x==1 || x==0){
            return 1;
        }
        else{
            for(int i=x;i>=1;i--){
                f=f*i;
            }
            return f;
        }
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println(Fact(a));
        sc.close();
    }  
      
}
