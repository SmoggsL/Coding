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
while (n > 0):
    a = list(map(int,input().split()))
    flag = 1
    for i in range(a[0],a[1]+1):
        if checkprime(i) == True: print(i)
    n-=1
    print()