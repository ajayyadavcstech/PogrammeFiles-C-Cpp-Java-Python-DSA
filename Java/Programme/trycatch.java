public class trycatch {
    public static void main(String[] args) {
        int a=3432;
        int b=0;
        
        try {
            int c=a/b;
            System.out.println(c);  
        } catch (Exception e) {
            System.out.println("WE failed to divide : "+e);
        }
        System.out.println("End of programme");
        

    }
}
