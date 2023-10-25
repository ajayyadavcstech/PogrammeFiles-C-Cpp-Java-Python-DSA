class A:
    @staticmethod
    def printclass():
        print("I am inside class A")
class B(A):
    @staticmethod
    def printclass():
        print("I am inside class B")
class C(A):
    @staticmethod
    def printclass():
        print("I am inside class C")
class D(B,C):
    pass

d=D()
d.printclass()


