import java.security.Identity;

class MyEmployee {
    private String name;
    private int id;
    private int salary;

    public void setname(String name) {
        this.name = name;   //we can also use this when there is ambiguity
    }

    public void setid(int n) {
        this.id = n;
    }

    public void setsalary(int n) {
        salary = n;
    }

    public void printdetil() {
        System.out.println(name + "\n" + salary + "\n" + id);
    }

}

public class accessmodifier {
    public static void main(String[] args) {
        MyEmployee emp1; // declaration
        emp1 = new MyEmployee(); // initialization

        // emp1.printdetil();

        // emp1.name = "ajay";
        // emp1.salary = 50000;
        // emp1.id = 66;

        // emp1.printdetil();

        // emp1.setname("ajeet");
        // emp1.setid(44);
        // emp1.setsalary(45000);

        // emp1.printdetil();

        emp1.setid(45);
        emp1.setname("ajay");
        emp1.setsalary(3000);

        emp1.printdetil();

    }
}
