import java.io.NotActiveException;

class library {
    static String[] Available_book = new String[20];
    static String[] Issued_book = new String[20];
    static int no_of_availablebook = 0;
    static int no_of_issuedbook = 0;
    static String[] Issued_person = new String[20];

    public void add_book(String bookname) {
        Available_book[no_of_availablebook++] = bookname;
    }

    public void available_book() {
        for (int i = 0; i < no_of_availablebook; i++) {
            System.out.print("(" + Available_book[i] + ") , ");
        }
        System.out.println();
    }

    public void issued_book() {
        for (int i = 0; i < no_of_issuedbook; i++) {
            System.out.print("(" + Issued_book[i] + ") , ");
        }
        System.out.println();
    }

    public void issued_person() {
        for (int i = 0; i < no_of_issuedbook; i++) {
            System.out.print("(" + Issued_person[i] + ") , ");
        }
        System.out.println();
    }

}

class Person extends library {
    String name;

    public Person(String name) {
        this.name = name; 

    }

    public void issue(String bookname) {
        int check = 0;
        for (int i = 0; i < no_of_availablebook; i++) {
            if (Available_book[i].equals(bookname)) {
                System.out.println("Book is available !");

                for (int j = i; j < no_of_availablebook - 1; j++) {
                    Available_book[j] = Available_book[j + 1];
                }
                no_of_availablebook--;
                check = 1;
                break;
            }
        }
        if (check == 0) {
            System.out.println("Book is not avialble in stok or book name is invalid");
            return;
        }
        Issued_book[no_of_issuedbook] = bookname;
        Issued_person[no_of_issuedbook++] = name;

    }

    public void return_book(String bookname) {
        for (int i = 0; i < no_of_issuedbook; i++) {
            if (Issued_person[i].equals(name) && Issued_book[i].equals(bookname)) {
                System.out.println("book succesfully returned");
                for (int j = i; j < no_of_issuedbook - 1; j++) {
                    Issued_book[j] = Issued_book[j + 1];
                    Issued_person[j] = Issued_person[j + 1];

                }
                no_of_issuedbook--;
                Available_book[no_of_availablebook++] = bookname;

                return;
            }
        }
        System.out.println("You don't own any book with this name");
    }

    public void donate_book(String bookname) {
        Available_book[no_of_availablebook++] = bookname;
    }
}

public class library_book {
    public static void main(String[] args) {
        Person p1 = new Person("ajay");
        library l = new library();
        l.add_book("RD SHARMA");
        l.add_book("RS AGRAWAL");
        l.add_book("C++");
        l.add_book("JAVA");

        l.available_book();

        p1.issue("RD SHARMA");
        l.available_book();
        p1.donate_book("PYTHON");

        l.available_book();
        p1.issued_book();
        p1.issued_person();
        
    }
}
