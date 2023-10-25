class Employee:
    no_of_leaves=5 #class variable
    def __init__(self,ename,eid,esalary) -> None: #constructor instant variable
        self.name=ename 
        self.id=eid
        self.salary=esalary
    
    def printdetail(self):
        print(self.name,self.id,self.salary,self.no_of_leaves)
    
    @classmethod
    def change_no_of_leaves(cls,newleave):
        cls.no_of_leaves=newleave
    
    @classmethod 
    def from_dash(cls,string):
        return cls(*string.split("-")) # cls(a,b,c) 

    @staticmethod
    def printgood(string):
        print(f"{string} is a good guy")

class Programmer(Employee): #single inheritance
    def __init__(self, ename, eid, esalary,planguge) -> None:
        super().__init__(ename, eid, esalary)
        self.language=planguge
    def print_programmer_detail(self):
        self.printdetail()
        print(self.language)
         

prog1=Programmer("ajay",45,500000,["c++,python"])
prog2=Programmer.from_dash("ajeet-48-30000-[\"c\"]")

prog1.print_programmer_detail()
prog2.print_programmer_detail()

