from typing import List


list=["ajay",8,"ajju",19,"hello",33,"nothing",32,44]
for i in list:
    if str(i).isnumeric() and i%2==0:
        print(i)