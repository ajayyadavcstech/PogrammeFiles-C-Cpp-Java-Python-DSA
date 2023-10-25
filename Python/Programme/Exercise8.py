import os
def soldier(path,file,formate):
    lis=list()
    with open(file,"r") as f:
        content=f.read()
        # print(content)
        lis=content.split(" ")
    # print(lis)
    os.chdir(path)
    dir=os.listdir()
    print(dir)
    i=1
    for item in dir:
        if (item.split("."))[1]!=format and item not in lis:
            os.rename(item,item.capitalize())
    for item in dir:
        if (item.split("."))[1]==formate and item not in lis:
            os.rename(item,f"def{i}.{formate}")
            print(item)
            i=i+1
soldier("E:\exe","soldier.txt","jpg")