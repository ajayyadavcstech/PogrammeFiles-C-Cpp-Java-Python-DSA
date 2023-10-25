def getdate():
    import datetime
    return datetime.datetime.now()

print("Enter 1 for lock and 2 for retrive")
a=int(input())
if a==1:
    b=int(input("Enter 1 for ajay 2 for harry 3 for rohan "))
    if b==1:
        c=int(input("Enter 1 for diet 2 for exercise "))
        if c==1:
            with open("ajay_diet.txt","a") as f:
                d=input("Enter diet of ajay ")
                date=str(getdate())
                f.write(date)
                f.write(" ")
                f.write(d)
                f.write("\n")
        else:
            with open("ajay_exe.txt","a") as f:
                d=input("Enter exercise of ajay ")
                date=str(getdate())
                f.write(date)
                f.write(" ")
                f.write(d)
                f.write("\n")
    elif b==2:
        c=int(input("Enter 1 for diet 2 for exercise "))
        if c==1:
            with open("harry_diet.txt","a") as f:
                d=input("Enter diet of harry ")
                date=str(getdate())
                f.write(date)
                f.write(" ")
                f.write(d)
                f.write("\n")
        else:
            with open("harry_exe.txt","a") as f:
                d=input("Enter exercise of harry ")
                date=str(getdate())
                f.write(date)
                f.write(" ")
                f.write(d)
                f.write("\n")
    else:
        c=int(input("Enter 1 for diet 2 for exercise "))
        if c==1:
            with open("rohan_diet.txt","a") as f:
                d=input("Enter diet of rohan ")
                date=str(getdate())
                f.write(date)
                f.write(" ")
                f.write(d)
                f.write("\n")
        else:
            with open("rohan_exe.txt","a") as f:
                d=input("Enter exercise of rohan ")
                date=str(getdate())
                f.write(date)
                f.write(" ")
                f.write(d)
                f.write("\n")
else:
     b=int(input("Enter 1 for ajay 2 for harry 3 for rohan "))
     if b==1:
        c=int(input("Enter 1 for diet 2 for exercise "))
        if c==1:
            with open("ajay_diet.txt","r") as f:
                print(f.read())
        else:
            with open("ajay_exe.txt") as f:
                print(f.read())
     elif b==2:
        c=int(input("Enter 1 for diet 2 for exercise "))
        if c==1:
            with open("harry_diet.txt","r") as f:
                print(f.read())
        else:
            with open("harry_exe.txt") as f:
                print(f.read())
     else:
        c=int(input("Enter 1 for diet 2 for exercise "))
        if c==1:
            with open("rohan_diet.txt","r") as f:
                print(f.read())
        else:
            with open("rohan_exe.txt") as f:
                print(f.read())
    


            


