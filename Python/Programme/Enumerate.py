#its simple bro
lis=["ajay","ajju","ajeet","aman"]
# i=1
# for item in lis:
#     if i%2 !=0:
#         print(f"jarvish please call {item}")
#     i+=1

#To replace this i we use enumerate function which return index and item 
for index,item in enumerate(lis): #enumeration return two values
    if index%2==0:
        print(f"jarvis please call {item}")
