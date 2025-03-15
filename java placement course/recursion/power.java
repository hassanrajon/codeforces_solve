import java.util.Scanner;

public class power {
    public static long pow(int a, int b) {
        if (b == 1) {
            return a;
        }
        return a * pow(a, b - 1);
    }

    public static long binary_exp(int a, int b) {
        if (b == 0) {
            return 1;
        }
        long half = binary_exp(a, b / 2);
        long halfPower = half*half;
        if (b % 2 != 0) {
            halfPower = a * halfPower*halfPower;
        }
        return halfPower;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        sc.close();
        // System.out.print(pow(a,b));
        System.out.println(binary_exp(a, b));
    }
}
