import time
inti=time.time()
print(inti)
print()
print("this is for ")
for i in range(20):
    print("this is ajay",end=" ")
aft_for=time.time()
print()
print(aft_for-inti)
print()
i=20
print("this is while ")
while i>0:
    print("this is ajay",end=" ")
    i=i-1
print()
print(time.time()-(aft_for)) 
