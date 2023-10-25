from os import close, read


f=open("ajay2.txt","r+")
print(f.tell())
print(f.readline(),end="")
print(f.tell())
print(f.readline())
print(f.tell())
f.seek(27)
print(f.tell())
print(f.readline())
f.close()
 


