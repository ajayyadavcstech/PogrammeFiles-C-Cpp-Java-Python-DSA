lis=[i for i in range(100) if i%3==0] # one line list comprehension
print(lis)
print(type(lis))

tup=(i for i in range(100) if i%4==0) #ther is no tuple comprehesion
print(tup)
print(type(tup))

set1=[1,2,3,4,5,5,1]
print(set1)

set2={i for i in set1 }
print(set2)

dic={i:f"value {i}" for i in range(20) if i%5==0}
print(dic)

even=(i for i in range(100) if i%10==0) #generaator comprehension
for i in even:
    print(even.__next__(),end=" ")
print()
print(type(even))