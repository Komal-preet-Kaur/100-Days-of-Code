package Day69;

import java.util.Scanner;

public class Countoddeven {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter the size of array:");
        int x=sc.nextInt();
        System.out.println("Enter the elements in the array");
        int[] arr=new int[x];
        for(int i=0;i<x;i++){
            arr[i]=sc.nextInt();
        }
        int countEven=0;
        int countOdd=0;
        for(int i=0;i<x;i++){
            if(arr[i]%2==0){
                countEven++;
            }
            else{
                countOdd++;
            }
        }
        System.out.println("Even numbers in array are:"+countEven);
        System.out.println("Odd numbers in array are:"+countOdd);
        sc.close();
    }
}
