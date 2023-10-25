def function_name(a,b,c,d):
    print(a,b,c,d)

# function_name("ajay","ajeet","aman","ayush")

def fun(lis):
    for i in lis:
        print(i,end=" ")
    print()

def funargs(*args): # args used to take multiple parmeter convert it into tuple
    for i in args:
        print(i,end=" ")

def funkwargs(**kwargs): # args used to take multiple parmeter convert it into tuple
    print(kwargs)
    for i,j in kwargs.items():
        print(i,j,end="--")

def funargskwargs(normal,*args,**kwargs): 
    print(normal)
    for i in args:
        print(i,end=" ")
    print()
    for i,j in kwargs.items():
        print(f"{i} is a {j}",end=" -- ")
    print()

a="I am a normal variable"
b=["ajay","ajeet","aman","ayush","nothing"]
c={"ajay":"programmer","ajeet":"educator"}
# fun(a)
# funargs() # args and kwargs are optional
# funargskwargs("ajay is good guy","ajju","aman","ajeet","ayush",**{"ajay":"cooL","anuj":"programmer"})

# fun("ajay")
# funargs("ajay","ajeet")

# def fun1(a,b,c,d):
#     print(a,b,c,d)

# a=[3,4]
# b=(6,8)
# fun1(*a,*b)

funkwargs(**{"ajay":"cook","ajju":"pro"},**{"ajeet":"cri","aman":"foot"}) 










