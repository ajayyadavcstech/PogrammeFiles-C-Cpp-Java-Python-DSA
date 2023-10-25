from typing import Mapping


def printaj(str):
    return f"this is a string of {str}"

def add(num1,num2):
    return num1+num2+5

print(f"the name is {__name__}") #here name is always __main__
if __name__=='__main__': 
   print(printaj("ajay"))
   a=add(4,5)
   print(a)
