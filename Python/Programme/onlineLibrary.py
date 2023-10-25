class Library:
    Lend_book={}
    def __init__(self) -> None:
        self.books=set()

    def addbook(self,*bookname):
        for book in bookname:
            self.books.add(book)
    
    def displaybooks(self):
        print(self.books)
    
    def borrow_book(Self,book_name,person_name):
        print(f"{book_name} book borroed by {person_name}")
        Self.Lend_book[person_name]=book_name
        Self.books.remove(book_name)
    
    def borrowed_person_display(self):
        print(self.Lend_book)
    
    def borrowed_return(self,person_name,book_name):
        self.books.add(book_name)
        self.Lend_book.pop(person_name)
        print(f"{book_name} book return by {person_name}")

lib=Library()
# lib.displaybooks()

lib.addbook("RS Agrawal","RD Sharma")
lib.addbook("RD Sharma")
# lib.displaybooks()

# lib.borrowed_person_display()

lib.borrow_book("RD Sharma","Ajay Yadav")
# lib.displaybooks()
# lib.borrowed_person_display()

lib.addbook("Rich Dad")
# lib.displaybooks()

lib.borrow_book("Rich Dad","Ajeet")
# lib.displaybooks()

lib.borrowed_return("Ajay Yadav","RD Sharma")
lib.displaybooks()
lib.borrowed_person_display()