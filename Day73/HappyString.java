import java.util.Scanner;

public class HappyString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            String s = scanner.next();
            int counter = 0;
            boolean isHappy = false;

            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    counter++;
                    if (counter > 2) {
                        isHappy = true;
                        break;
                    }
                } else {
                    counter = 0;
                }
            }
            
            if (isHappy) {
                System.out.println("Happy");
            } else {
                System.out.println("Sad");
            }
        }

        scanner.close();
    }
}
