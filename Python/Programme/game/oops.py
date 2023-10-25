class Employee:
    no_of_leaves=5
    def __init__(self,empname,empage,empsalary) -> None:  #constrctor making instance of an object
        self.name=empname
        self.age=empage
        self.salary=empsalary
    def printdetail(self):
        print(self.name,self.age,self.salary,self.no_of_leaves)
    
    @classmethod
    def change_leaves(cls,new_leave):
        cls.no_of_leaves=6

    @classmethod
    def from_dash(cls,string):
        # lis=string.split("-")
        # a=cls(lis[0],lis[1],lis[2]) # calling object to set values in employee
        # return a #return address of object
        return cls(*string.split("-"))

    @staticmethod
    def printgood(string):
        print(f"{string} is a good boy")

emp1=Employee("ajay",4,455)
emp2=Employee("ajeet",5,67)

emp1.printdetail()
emp2.printdetail()

emp3=Employee.from_dash("ankita-8-222")
emp3.printdetail()

print(emp3)

emp1.printgood("ajay")
