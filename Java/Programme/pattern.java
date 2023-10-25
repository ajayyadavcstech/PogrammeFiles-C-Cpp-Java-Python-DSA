public class pattern {
    public static void main(String[] args) {
        // int n = 5;
        // for (int i = n; i >= 1; i--) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print("* ");

        //     }
        //     System.out.println();

        // }
        int sum=0;
        int table=8;
        for (int i = 1; i <= 10; i++) {
            sum+=table*i;
        }
        System.out.println(sum);
    }
}
