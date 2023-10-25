f=open("ajay_diet.txt")
try:
    a=open("harry_diet.txt")
except Exception as e:
    print("can't opened file...",e)


else:
    print(a,"file opened sucessfully...")
    a.close()
    print(a,"file closed sucessfully...")


finally:
    print("f file cosed succefully...")
