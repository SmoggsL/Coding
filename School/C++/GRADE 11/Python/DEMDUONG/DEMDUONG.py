n = int(input("So N:"))
a = list(map(int,input("Nhap day A: ").split()))
ans = 0;
count = 0;
for i in a:
    if (i > 0):
        count+=1
        ans += i
print (count, ans)

