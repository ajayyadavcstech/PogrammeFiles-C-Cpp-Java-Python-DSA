num=['5','3','2','8','9']
# print(type(num))

#to convert string to int we use map take argument as function and nume or list and return
# num=list(map(int,num))
# square=list(map(lambda x:x*x,num))
# print(square)

def square(a):
    return a*a
def cube(a):
    return a*a*a

fun=[square,cube]

for i in range(1,11):
    lis=list(map(lambda x:x(i),fun))
    print(lis)

