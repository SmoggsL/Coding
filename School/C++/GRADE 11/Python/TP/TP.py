x = int(input())
y = int(input())
# if (x>0) and (y>x) :
#     print(1)
# elif (y>0) and (x>y) :
#     print(2)
# elif (x>0) and (-y>x) :
#     print(4)
# elif (-y>0) and (x>-y) :
#     print(3)
# elif (-x>0) and (y>-x) :
#     print(8)
# elif (y>0) and (-x>y) :
#     print(7)
# elif (-x>0) and (-y>-x) :
#     print(5)
# elif (-y>0) and (-x>-y) :
#     print(4)
# else :
#     print(0)
if (x == 0) or (y == 0) or (abs(x) == abs(y)): print(0)
elif (x > 0):
    if (y > 0):
        if (y > x): print (1)
        elif (y < x): print(2)
    elif (y < 0):
        if (abs(y) < abs(x)): print(3)
        elif(abs(y) > abs(x)): print(4)
elif (x<0):
    if(y <0):
        if (abs(y) < abs(x)): print(6)
        elif(abs(y) > abs(x)): print(5)
    elif(y >0):
        if (abs(y) < abs(x)): print(7)
        elif(abs(y) > abs(x)): print(8)