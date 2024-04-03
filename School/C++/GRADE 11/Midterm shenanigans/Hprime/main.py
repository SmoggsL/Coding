import math
from math import sqrt
a = list(map(int,input().split()))
def checkprime(n):
    if (n<= 1): return False
    if (n == 2 or n == 3): return True
    if (n %2 == 0 or n %3 == 0): return False
    else:
        for j in range(5,int(sqrt(n)) + 1,6):
            if (n% j ==0 or n%(j+2) == 0):
                return False
    return True

for i in range(1,a[0]+1):
    if checkprime(i) == True:
        k = i
        sum = 0
        while (k >0):
            sum += k%10
            k/=10
        if sum == a[1]: print(i)