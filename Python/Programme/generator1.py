def fibbo(n):
    first=0
    sec=1
    next=0
    for i in range(n):
        a=first
        next=first+sec
        first=sec
        sec=next
        yield a

def fac(n):
    a=1
    for i in range(10):
        a=a*(i+1)
        yield a

a=fibbo(10)
for i in a:
    print(i)

b=fac(10)
for i in b:
    print(i)
