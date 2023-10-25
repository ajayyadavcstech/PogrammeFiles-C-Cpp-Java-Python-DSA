class MymainEmployee {

    String name;
    int id;
    int salary;

    public MymainEmployee(String name, int salary, int id) {
        this.name = name;
        this.salary = salary;
        this.id = id;
    }

    void pritdetail() {
        System.out.println(name);
        System.out.println(salary);
        System.out.println(id);
    }

}

public class constructor {
    public static void main(String[] args) {
        MymainEmployee emp1;
        emp1 = new MymainEmployee("ajay", 45000, 56);

        emp1.pritdetail();

    }
}
