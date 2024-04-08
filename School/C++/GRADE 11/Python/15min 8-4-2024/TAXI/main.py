import math
from math import sqrt

n = int(input())
a = list(map(int,input().split()))
sorted(a)
ans = 1
car = 4
i = 0
while i < n:
    # print (car, a[i])
    if (car >= a[i]):
        car -= a[i]
        # print (car)
    else:
        car = 4
        ans +=1
        i-=1
        # print (ans)
    i+=1
print (ans)
    