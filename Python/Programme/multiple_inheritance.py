class Employee:
    no_of_vacation=8
    def __init__(self,ename,eage,esalary) -> None:
        self.name=ename 
        self.age=eage 
        self.salary=esalary 
    
    def printdetail(self):
        print(self.name,self.age,self.salary,self.no_of_vacation)

    @classmethod
    def change_noofvacatin(cls,newvacation):
        cls.no_of_vacation=newvacation
    
    @staticmethod
    def printgood(string):
        print(f"{string} is a good guy")
    
    @classmethod
    def form_string(cls,string):
        return cls(*string.split("-"))
    
# emp1=Employee("ajay",33,30000)
# emp2=Employee.form_string("ajju-34-400000")

# emp1.change_noofvacatin(29)

# emp1.printdetail()
# emp2.printdetail()

class player:
    no_of_matches=40
    def __init__(self,pname,pgame) -> None:
        self.name=pname
        self.game=pgame
    def printdetail(self):
        print(self.name,self.game)

# pla1=player("shubham",["criket,football"])
# pla2=player("ajay",["bollyboll","cri"])

# pla1.printdetail()
# pla2.printdetail()

class cool_Progrmmer(Employee,player):
    def printdetail(self):
        print(self.name,self.game,self.salary,self.no_of_vacation,self.no_of_matches)

coolem1=cool_Progrmmer("ajay",34,49999)
coolem1.name="ajay"
coolem1.game="cricket"
coolem1.printdetail()



         
