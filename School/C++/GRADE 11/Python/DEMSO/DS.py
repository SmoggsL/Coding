n = int(input())
k = int(input())

dig = n%10;
if (dig > k):
    ans = int(n/10) + 1
    print(ans)
else:
    ans = int(n/10)
    print(ans)