import java.util.Scanner;
class Head {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();  
        sc.nextLine();  
        while (t-- > 0) {
              
            sc.nextLine();  
            String str = sc.nextLine();  
            
            if (str.contains("I")) {
                System.out.println("INDIAN");
            } else if (str.contains("Y")) {
                System.out.println("NOT INDIAN");
            } else {
                System.out.println("NOT SURE");
            }
        }
        sc.close();
    }
}
