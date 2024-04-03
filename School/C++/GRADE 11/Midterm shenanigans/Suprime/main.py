import math
from math import sqrt
def checkprime(n):
    if (n<= 1): return False
    if (n == 2 or n == 3): return True
    if (n %2 == 0 or n %3 == 0): return False
    else:
        for j in range(5,int(sqrt(n)) + 1,6):
            if (n% j ==0 or n%(j+2) == 0):
                return False
    return True
n = int(input())
flag = 1
while (n > 10):
    if (checkprime(int(n/10)) == False):
        print("FALSE")
        flag = 0
        break
    n = int(n/10)
if flag == 1: print("TRUE")