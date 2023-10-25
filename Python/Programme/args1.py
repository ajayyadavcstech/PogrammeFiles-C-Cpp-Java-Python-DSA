def argfun(normal,*args,**kwargs):#first normal(a,b,c,etc) then *args(list,tuple) then **kwargs(dic)
    print(normal)
    print()
    for i in args:
        print(i)
    print()
    for i in kwargs.keys():
        print(kwargs[i])


   
lis=["anuj","akash"]
dic={"1":"ajay","2":"ajeet","3":4}
a=5
argfun(a,*lis,**dic) # passing is always according to function arguments





