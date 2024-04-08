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
    div = prime[0]
    cnt = 0
    divcnt = 0
    a =[]
    if (checkprime(n) == True): print(n,1)
    else:
        while (n>1):
            if(n%div == 0): 
                divcnt+=1
                n = n/div
                if divcnt == 1: 
                    a.append(div)
            else:
                if divcnt >0: a.append(divcnt)
                divcnt = 0
                cnt += 1
                if cnt >= len(prime): 
                    while True:
                        div += 1
                        if checkprime(div) == True: break
                else: div = prime[cnt]
        if divcnt >0: a.append(divcnt)
        print(' '.join(map(str, a))) 
    t-=1