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
for i in range (1, int(n/2) +1):
    if checkprime(i) == 1 and checkprime(n-i) == 1:
        print(i),print(n-i)
        flag = 0

if flag == 1: print(n)