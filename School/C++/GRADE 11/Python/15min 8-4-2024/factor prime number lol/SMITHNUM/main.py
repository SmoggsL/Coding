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

prime = []
for i in range(2,10000):
    if (checkprime(i) == True): prime.append(i)

t = int(input())
while t > 0:    
    n = int(input())
    k = n
    div = prime[0]
    cnt = 0
    if (checkprime(n) == True): print(0)
    else:
        sumprd = 0
        while (n>1):
            if(n%div == 0): 
                n = n/div
                temp = div
                while (temp > 0):
                    sumprd += int(temp%10)
                    temp = int(temp/10)
                # print (sumprd)
            else:
                cnt += 1
                if cnt >= len(prime): 
                    while True:
                        div += 1
                        if checkprime(div) == True: break
                else: div = prime[cnt]
        sumnum = 0
        while (k > 0):
            sumnum += int(k%10)
            k = int(k/10)
            # print (sumnum)
        if sumnum == sumprd: print(1)
        else: print(0)
    t-=1