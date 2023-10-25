from typing import MutableMapping


mystr="ajay is a good boy"
print(mystr)
print(mystr[3])
print(mystr[0:4]) # 0 includes but 4 not includes
print(len(mystr))
print(mystr[0:len(mystr)])
print(mystr[0:34])
print(mystr[0:]) #it by defalut take all string
print(mystr[:4]) #it by default start from 0
print(mystr[::]) # it by default start from 0 to end and 1  [0:len(mystr):1] here it misses 0 character
print(mystr[::2]) #here it misses 1 char
print(mystr[-4:])

#here come negative index concept
#  |a|  |j|  |a|  |y|  |_|  |i|  |s|  |_|  |a|  |_|  |g|  |o|  |o|  |d|  |_|  |b|  |o|  |y|           // |_| this indicate blank
#   0    1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17
#  -18  -17  -16  -15  -14  -13  -12  -11  -10  -9    -8   -7   -6   -5   -4   -3   -2   -1

print(mystr[-18:])

#if we use -1 in third input then it rotate the string

print(mystr[::-1]) #string rotated
print(mystr[-17:-2:1 ])
print(mystr.isalnum())
# str1="ajay 1"   false
# str1="ajay@"    false
# str1="ajay@1"   false
# str1="ajay"     true
# str1="1"        true
str1="ajay1"     #true
print(str1.isalnum()) #alfa-numeric term means which only contain alphabet or numbers or both without space

str2="ajay"
print(str2.isalpha())#it only check is alphabet or not

print(mystr.endswith("boy")) #it checks is string ends with entered string(here boy) or not 
print(mystr.count("o"))#it check for no of intered input (here "o") is present in the string
print(mystr.capitalize())
print(mystr.find("is"))
print(mystr.lower())
print(mystr.upper())
print(mystr.replace("is","are"))














