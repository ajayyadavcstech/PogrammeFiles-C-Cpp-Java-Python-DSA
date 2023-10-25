class employee:
    no_of_year=12 

emp1=employee()
emp2=employee()

emp1.name="ajay"
emp2.name="ajeet"

emp1.id=345
emp2.id=33

emp1.salary=3

employee.no_of_year=2

print(emp1.__dict__)
print(emp2.__dict__)
print(employee.__dict__)
