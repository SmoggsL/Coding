import math
a =int(input("Nhap so a: "))
b =int(input("Nhap so b: "))
c =int(input("Nhap so c: "))
delta = int(b*b - 4*a*c)
if delta > 0:
    x1 = float((-b + math.sqrt(delta))/(2*a))
    x2 = float((-b - math.sqrt(delta))/(2*a))
    print (x1, x2)
elif delta == 0 :
    x1 = float(-b/(2*a))
    print (x1)
else :
    print("Vo nghiem");