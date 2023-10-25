class Employee:
    def __init__(self,fname,lname) -> None:
        self.fname=fname 
        self.lname=lname
        # self.email=f"{self.fname}.{self.lname}@gmail.com"
    def explain(self):
        return f"This employee is {self.fname} {self.lname}"
    
    @property #  we can use email as a attribute
    def email(self):
        if self.fname==None and self.lname==None:
            return "Email not set"
        return f"{self.fname}.{self.lname}@gmail.com"
    
    @email.setter
    def email(self,string):
        lis=string.split("@")
        name=lis[0].split(".")
        self.fname=name[0]
        self.lname=name[1]
    
    @email.deleter
    def email(self):
        self.fname=None
        self.lname=None



emp1=Employee("ajay","yadav")

print(emp1.explain())
print(emp1.email)

emp1.fname="ajeet"
print(emp1.explain())
print(emp1.email)

emp1.email="this.that@gmailcom"
print(emp1.email)
print(emp1.fname,emp1.lname)

del emp1.email
print(emp1.email)




    
