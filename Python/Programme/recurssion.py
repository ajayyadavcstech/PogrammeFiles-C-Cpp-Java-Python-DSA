def fac(n):
    """This return !n=n*(!n-1)"""
    if n==0:
        return 1
    return n*fac(n-1)

print(fac.__doc__)
a=fac(5)
print(a)

