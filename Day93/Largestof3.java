import java.util.Scanner;

public class Largestof3
{
    public static void main(String[] args)
    {
        // Write your code here
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt(),b=sc.nextInt(),c=sc.nextInt();
        if(a>b && a>c){
            System.out.println(a);
        }
        else if(b>a && b>c){
            System.out.println(b);
        }
        else{
System.out.println(c);}
sc.close();
    }
}