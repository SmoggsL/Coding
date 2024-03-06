n = int(input())
a = list(map(int, input().split()))
i = 0
lon = 0
while (i<n) :
    d = 0
    if (a[i]>0) :
        while (a[i]>0):
            d+=1
            i+=1
    lon = max(lon, d)
    i+=1
print(lon)
i = 0 
while (i<n) :
    d = 0
    if (a[i] > 0) :
        j = i
        while (a[i]>0) :
            d+=1 
            i+=1 
    if (d == lon) :
        for k in range (j, i) :
            print(a[k], " ")
        break
    i+=1