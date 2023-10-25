class Employee {
    int id;
    String name;

    public void printdetil() {
        System.out.println("My name is : " + name);
        System.out.println("My id is : " + id);
    }
}

class employee {
    String name;
    int salary;
    int id;

    public void getsalary() {
        System.out.println(salary);
    }

    public void getname() {
        System.out.println(name);
    }

    public void setname(String ename) {
        name = ename;
    }
}

public class newclass {
    public static void main(String[] args) {
        System.out.println("This is our custom class");
        // Employee emp1=new Employee();
        // emp1.id=22;
        // emp1.name="ajay";
        // emp1.printdetil();

        employee emp1 = new employee();
        emp1.getname();
        emp1.setname("ajay");
        emp1.getname();

        emp1.getsalary();

        emp1.salary = 36000;
        emp1.getname();

    }
}
