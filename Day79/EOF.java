import java.util.Scanner;
public class EOF {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=1;
        while(sc.hasNext()){
            System.out.println(n++ +" "+sc.nextLine());
        }
        sc.close();        
        
    }
}