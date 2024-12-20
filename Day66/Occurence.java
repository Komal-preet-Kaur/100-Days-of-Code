import java.util.Scanner;

public class Occurence {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array :");
        int size=sc.nextInt();
        int count=0;
        System.out.println("Enter the array of size :"+size);
        int[] arr=new int[size];
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter the number you want to find occurence of:");
        int num=sc.nextInt(); //to find occurence of 
        for(int i=0;i<size;i++){
            if(arr[i]==num){
                count++;
            }
        }
        System.out.println("The occurence of "+num+" is "+count);
        sc.close();

     }
}
