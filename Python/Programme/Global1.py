l=10 #global variable available globally
def fun(n):
    # l=4 #local variable
    global l #global variable 
    l=5     #updating global variable
    print(l)

fun("This is me")
print(l)
