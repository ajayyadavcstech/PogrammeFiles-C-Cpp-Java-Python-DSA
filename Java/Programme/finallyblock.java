// import javax.management.openmbean.OpenDataException;
// class ajay{
//      void ajju(){
//         System.out.println("I am inside ajay class of ajju");
//     }
//     static void aja(){
       
//     }
// }
public class finallyblock {
    static int greet() {
        try {
            int a = 9;
            int b = 5;
            int c = a / b;
            return c;

        } catch (Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("This is end of a programme");
        }
        return -1;
    }

    static  int forloop() {
        try {
            for (int i = 0; i < 10; i++) {
                if (i == 8)
                    return i;
            }
            throw new Exception();
        } catch (Exception e) {
            System.out.println("encounterd exception : " + e.getLocalizedMessage());

        }
        finally {
            System.out.println("My name is ajay and i am finally block");
        }
        System.out.println("My am outside finally block");
        return -1;

    }

    public static void main(String[] args) {
        // System.out.println(greet());
        System.out.println(forloop());
        

    }
}
