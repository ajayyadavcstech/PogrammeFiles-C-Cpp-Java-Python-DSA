n=int(input("Enter the no of rows "))
check=bool(int(input("enter 1 or 0 ")))
print(check)
print(range(0))
if check==True:
    for i in range(n):
        for j in range(i+1):
            print("*",end=" ")
        print(end="\n")
else:
    for i in range(n):
        for j in range(n-i):
            print("*",end=" ")
        print(end="\n")