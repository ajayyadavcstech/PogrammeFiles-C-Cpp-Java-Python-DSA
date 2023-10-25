import inspect
import bs4
class Employee:
    no_of_holidays=33
    def __init__(self,fname,fsalary,eid) -> None:
        self.name=fname
        self.salary=fsalary
        self.id=eid
    
    def printdetail(self):
        print(f"{self.name},{self.salary},{self.id},{self.no_of_holidays}")
    
class inspecting:
    pass

def sum(a,b):
    return a+b

emp=Employee("ajay",4000,45)

print(inspect.ismethod(emp.printdetail))