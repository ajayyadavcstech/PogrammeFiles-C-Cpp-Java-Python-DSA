public class varargs {
    // static int sum(int a,int b)
    // {
    // return a+b;
    // }

    // static int sum(int... arr) {//args
    //     int sum = 0;
    //     for (int i : arr) {
    //         sum += i;
    //     }
    //     return sum;
    // }

    static int sum(int a,int...arr)
    {
        int sum=a;
        for (int i : arr) {
            sum+=i;
        }
        return sum;
    }


    public static void main(String[] args) {
        System.out.println("Welcome varargs");

        System.out.println(sum(4,6));
        System.out.println(sum(4));
        System.out.println(sum(4, 6, 8));

    }
}
