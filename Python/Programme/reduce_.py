#reduce 
import functools
lis=[1,2,3,4,5,6]
num=functools.reduce(lambda x,y:x+y,lis)  
print(num)

