a=int(input("Enter first digit "))
b=int(input("Enter second digit "))
c=input("enter operator ")
if a==45 and b==3 and c=='*':
    print("555")
elif a==56 and b==9 and c=='+':
    print("77")
elif a==56 and b==6 and c=='/':
    print("4")
elif c=='+':
    print(a+b)
elif c=='-':
    print(a-b)
elif c=='*':
    print(a*b)
elif c=='/':
    print(a/b)
else:
    print("enter valid operator")

