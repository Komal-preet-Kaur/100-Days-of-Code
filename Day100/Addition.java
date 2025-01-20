import java.util.Scanner;

public class Addition{
    public static int[] []add(int a[][],int r1,int c1,int b[][] ,int r2, int c2){
        int sum[][]=new int[r1][c1];
        if(r1 !=r2 || c1!=c2){
            System.out.println("Not a valid matrix to add ");
        }
        else{
         for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
         }  
        }
        return sum; 
        
    }
    public static void main (String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter num of rows and cols in array 1:");
        int r1=sc.nextInt();
        int c1=sc.nextInt();
        int [][] a=new int[r1][c1];
        System.out.println("Enter the array:");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter num of rows and cols in array 2:");
        int r2=sc.nextInt();
        int c2=sc.nextInt();
        int [][] b=new int[r2][c2];
        System.out.println("Enter the array:");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                b[i][j]=sc.nextInt();
            }
        }

        int [][]result= add(a, r1, c1, b, r2, c2);
        if(result!=null){
            System.out.println("Sum of the two matrices:");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    System.out.print(result[i][j]+" ");
                }
                System.out.println();
        }
        
    }
        sc.close();

        
    }
}