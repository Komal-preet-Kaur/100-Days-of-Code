import java.util.Scanner;

public class Multiplication{
    public static int[] []Product(int a[][],int r1,int c1,int b[][] ,int r2, int c2){
        int prod[][]=new int[r1][c2];
        if(c1 != r2){
            System.out.println("Not a valid matrix to product ");
        }
        else{
         for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    prod[i][j]+=(a[i][k]*b[k][j]);
                }
            }
         }  
        }
        return prod; 
        
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

        int [][]result= Product(a, r1, c1, b, r2, c2);
        if(result!=null){
            System.out.println("Prod of the two matrices:");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    System.out.print(result[i][j]+" ");
                }
                System.out.println();
        }
        
    }
        sc.close();

        
    }
}