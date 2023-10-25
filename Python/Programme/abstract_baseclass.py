from abc import ABC, abstractmethod

class shape(ABC): #Abstract base class
    @abstractmethod
    def printarea(self): #this is a abstract method it does not have any implementation
        pass
class rectangle(shape):
    type="rectangle"
    side=4
    def __init__(self) -> None:
        self.length=5
        self.breath=4
    def printarea(self):
        print(self.length*self.breath)
    
rec1=rectangle()
rec1.printarea()

# shap=shape() #we are  not allow to use abc as a object


