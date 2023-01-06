n = int(input("Nhap So Nguyen n: "))
m = int(input("Nhap So Nguyen m: "))
#Option 1
if n%2 == 0 or m%2 == 0 :
    n -= 1;
    m -= 1;
else:
    n += 1;
    m += 1;
print(n,m)
