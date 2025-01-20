import java.util.Scanner;

public class Transpose {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // input of array 
        System.out.println("Enter num of rows and cols in array :");
        int r = sc.nextInt();
        int c = sc.nextInt();
        int[][] a = new int[r][c];
        System.out.println("Enter the array:");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        // displaying the array
        System.out.println("Matrix entered is :");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }

        int[][] result = new int[c][r];
        System.out.println("Transpose of the matrix is :");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result[j][i] = a[i][j];
            }
        }

        System.out.println("Matrix after transpose is  :");
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
