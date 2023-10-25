#snake water gun
import random
game=["snake","water","gun"]
i=10
point_com=0
point_me=0
while i>0:
    me=input("Enter among snake water and gun ")
    com=random.choice(game)
    if me!="snake" and me!="water" and me!="gun":
        print("Are you made , wrong input!")
        print()
        continue
    i=i-1
    if(com==me):
        print("matched value")
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
    elif(com=="snake" and me=="water"):
        print("unmatched !","computer enterd snake,you enterd water")
        point_com=point_com+1
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
    elif(com=="water" and me=="snake"):
        print("unmatched !","computer enterd water,you enterd snake")
        point_me=point_me+1
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
    elif(com=="gun" and me=="snake"):
        print("unmatched !","computer enterd gun,you enterd snake")
        point_com=point_com+1
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
    elif(com=="snake" and me=="gun"):
        print("unmatched !","computer enterd snake,you enterd gun")
        point_me=point_me+1
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
    elif(com=="water" and me=="gun"):
        print("unmatched !","computer enterd water,you enterd gun")
        point_com=point_com+1
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
    elif(com=="gun" and me=="water"):
        print("unmatched !","computer enterd gun,you enterd water")
        point_me=point_me+1
        print("your current score:",point_me)
        print("computer current score:",point_com)
        print(i,"Life left")
        print()
print("game over")
print("your score:",point_me,"computer score",point_com)
if point_me==point_com:
    print("match draw")
elif point_com>point_me:
    print("computer win !")
else:
    print("you won ! congrates ")
