with open ("ajay2.txt") as f:#it open and close the file automatically
    print(f.readlines())
    print(f.readlines())
    #here files automatically closes

f=open("ajay2.txt")      #file again opens
print(f.readlines())
print(f.readlines())
f.close()
