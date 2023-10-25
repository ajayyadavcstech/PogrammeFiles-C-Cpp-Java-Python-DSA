import time
from functools import lru_cache

@lru_cache(maxsize=2) #it store last to values in stack
def some_work(n):
    time.sleep(n)# some task taking time
    return n

print("Now running....")
some_work(3)
print("Running again...")
some_work(3)
print("Ended...")

print("Now running....1")
some_work(4)
print("Running again...1")
some_work(4)
print("Ended...1")

print("Now running....2")
some_work(5)
print("Running again...2")
some_work(5)
print("Ended....2")

some_work(3)
print("ended for 3")


