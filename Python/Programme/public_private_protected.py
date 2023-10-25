#here we can access potected and private from outside the class 
# In python protected and private is only conceptual basis and we have to avoid access from outside whereas in other languages we can't access these variables 

class Employee:
    no_of_leaves=5
    _salary=40000
    __wealth=5000000

class son(Employee):
    pass

class player:
   pass

emp=son()
emp1=Employee()
# print(emp.no_of_leaves)
# print(emp._salary)
# print(emp1._Employee__wealth)

pla=player()
print(emp1._salary)