from collections import Counter
n = str(input("Day a: "))
a = ''.join(sorted(n))
lst = list(a)
big = 0
cnt = Counter()
for letter in lst:
    cnt[letter]+=1
    big = max(big,cnt[letter])
print(cnt)
while a:
    for i in lst:
        if (cnt[i] == big): 
            print(i)
            lst.remove(i)
    if not a: break

