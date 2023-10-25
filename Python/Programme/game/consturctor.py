class Employee:
    no_of_leaves=5 #This is a class variable
    def __init__(self,emp_name,emp_salary) -> None: #this is constructor
        self.name=emp_name  #In constructor instant variable created
        self.salary=emp_salary
    def printdetail(self):
        print(self.name)
        print(self.salary)
        print(self.no_of_leaves)
    @classmethod #This method uses class (cls) to change class object from any instant object 
    def change_leaves(cls,newleave):
        cls.no_of_leaves=newleave


emp1=Employee("ajay",3445)
emp2=Employee("ajeet",3322)
Employee.no_of_leaves=6
emp1.change_leaves(66)

emp1.printdetail()
emp2.printdetail()

