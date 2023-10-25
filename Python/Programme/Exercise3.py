n=55
i=10
while 1:
    if i==0:
        print("you lost the game")
        break
    a=int(input("Enter the number "))
    i=i-1
    if a==n:
        print("you won the game in ",10-i," guesses")
        break
    elif a>n:
        print("you enterd greater no ",i," guesses left")
    else:
        print("you enterd lesser no ",i," guesses left")
