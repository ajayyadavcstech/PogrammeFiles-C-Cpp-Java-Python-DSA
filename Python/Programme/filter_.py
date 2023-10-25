lis=[1,2,3,4,5,6,7,8,9,55]
def is_greater_5(num):
    return num>5

# filter used to return true value
ans=list(filter(is_greater_5,lis))
print(ans)

