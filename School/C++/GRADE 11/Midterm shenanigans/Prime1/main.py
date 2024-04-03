import math
from math import sqrt
n = int(input())
flag = 1
if (n < 1): flag = 0
elif (n >= 4):
    for i in range(2,int(sqrt(n)) + 1):
        if (n% i ==0):
            flag = 0
            break
if (flag == 0): print("NO")
else: print("YES") 