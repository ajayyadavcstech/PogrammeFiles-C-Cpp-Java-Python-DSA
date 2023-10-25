# def function1():
#     print("hello")

# fun2=function1 #copy of function1 in fun2
# del function1 #deleting function1
# fun2()
  
# def fun(num):
#     if num==0:
#         return print #we can return function
#     elif num==1:
#         return sum

# a=fun(1)
# print(a)

# def executer(fun): #we can pass function as a arguments
#     fun("ajju") 

# executer(print)

def dec1(fun):#function used to update any given function
    def nowexe():
        print("Executing now")
        fun()
        print("Executed")
    return nowexe
@dec1 
def who_is_ajay():
    print("ajay is a good boy")
# who_is_ajay=dec1(who_is_ajay)
who_is_ajay()
 


