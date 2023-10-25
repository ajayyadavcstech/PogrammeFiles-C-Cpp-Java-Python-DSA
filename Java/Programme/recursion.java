public class recursion {
    static int fac(int n) {
        if (n == 1 && n == 0)
            return 1;

        return n * fac(n - 1);
    }

    static int fib(int n, int first, int second) {
        int next = first + second;

        if (n == 1) {
            return first;
        }

        return fib(n - 1, second, next);

    }

    public static void main(String[] args) {
        // System.out.println("factorial of a no is : " + fac(5));

        for (int i = 1; i <= 10; i++) {
            System.out.print(fib(i, 0, 1)+" ");
        }


    }
}
