from pygame import mixer
from datetime import datetime
from time import time

def ring(file):
    mixer.init()
    mixer.music.load(file)
    mixer.music.play()
    while 1:
        inp=input("Enter s for stop")
        if inp=="s":
            mixer.music.stop()
            break
def log_file(file,message):
    with open(file,"a") as f:
        f.write(f"{datetime} : {message}\n")
        f.write("\n")
if __name__=="__main__":
    ini_water=time()
    ini_eye=time()
    ini_exercise=time()

    water_sec=10
    eye_sec=20
    exe_sec=30

    i=0
    j=0
    k=0

    while 1:
        if i==1 or j==1 or k==1:
            break
        if time()-ini_water>water_sec:
            if i>=10:
                continue
            print("Time for drinking")
            i+=1
            ring("D:\MY COURCES\Python\Programme\game\water.mp3")
            ini_water=time()
            inp=input("Enter message")
            log_file("water.txt",inp)
        if time()-ini_eye>eye_sec:
            if j>=8:
                continue
            print("Time for eye")
            j+=1
            ring("D:\MY COURCES\Python\Programme\game\eye.mp3")
            ini_eye=time()
            inp=input("Enter message")
            log_file("eye.txt",inp)
        if time()-ini_exercise>exe_sec:
            if k>=6:
                continue
            print("Time for exercise")
            k+=1
            ring("D:\MY COURCES\Python\Programme\game\water.mp3")
            ini_exercise=time()
            inp=input("Enter message")
            log_file("exe.txt",inp)
        
print("Task complited")
print("Thanks for using !")



