package Day71;
import java.util.Scanner;

public class LoopsHR{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            int current=a;
            for(int j=0;j<n;j++){
                current+=b*(int)Math.pow(2,j);
                System.out.print(current+" ");
            }
            System.out.println();
            
        }
        
        in.close();
    }
}
