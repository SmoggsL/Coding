import math

def exponent(n1 , n2):
    if n2 > 0:
        m = n1
        for i in range(n2 - 1): n1 = n1 * m
        return n1
    if n2 < 0:
        m = - n1
        for i in range(abs(n2) - 1): n1 = n1 * m
        return 1/n1
    return 1

m = 2
n = -2
t = exponent(m,n)
print(t)
