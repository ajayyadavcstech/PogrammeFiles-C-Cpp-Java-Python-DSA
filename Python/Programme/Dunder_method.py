class Employee:
    no_of_leaves=3
    def __init__(self,ename,esalary,eid) -> None:
        self.name=ename 
        self.salary=esalary
        self.id=eid
    def printdetial(self):
        print(self.name,self.id,self.salary,self.no_of_leaves)
    
    def __add__(self,other):   #dunder method
        return self.salary+other.salary
    def __sub__(self,other):
        return self.salary-other.salary
    def __repr__(self) -> str:
        return self.name
    def __str__(self) -> str:
        return self.name

emp1=Employee("ajay",5000,56)
emp2=Employee("ajeet",4000,54)

# print(emp1+emp2)
# print(emp1-emp2)

print(str(emp1))
print(repr(emp1))



