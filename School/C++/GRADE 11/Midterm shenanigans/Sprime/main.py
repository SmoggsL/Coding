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
def sprime(n):
    while (n > 10):
        if (checkprime(int(n/10)) == False): return False
        n = int(n/10)
    return True

a = list(map(int,input().split()))
ans = []
for i in range (a[0],a[1]+1):
    if checkprime(i) == True:
        if sprime(i) == True: ans.append(int(i))

print(' '.join(map(str, ans))) 