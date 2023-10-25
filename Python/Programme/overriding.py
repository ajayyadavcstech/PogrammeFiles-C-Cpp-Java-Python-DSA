class A:
    a="I am inside A class variable"
    def __init__(self) -> None:
        self.a="I am inside A instant variable"
        self.b="I am instant var b"
class B(A):
    a="I am inside B class varible"
    def __init__(self) -> None:
        super().__init__()
        # self.a="I am insdie B instant variable"
        self.c="I am Instant var c"

a=B()

print(a.a)
