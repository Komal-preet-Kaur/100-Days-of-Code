import java.util.Scanner;

public class Leapyear {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the year:");
        int year=sc.nextInt();
        boolean flag= leap(year);
        System.out.println("Leap year ="+flag);
        sc.close();
    }

    static boolean leap(int year){
        if(year % 100==0){
            if(year %400==0)
            return true;
            else{
                return false;
            }
        }
        else{
            if(year%4==0){
                return true;
            }
            else return false;

        }
    }
    
    
}
