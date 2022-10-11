import math
t = int(input())
while t>0:
    n = int(input())
    s = input()[:n]
    b = int(s, 2)
    max = -9999
    y= 0
    for i in range(1, n+1):
        res = int(b / pow(2,i))
        temp = b ^ res
        if(temp>max):
            max = temp
            y = i
            
    print(y)
    t -=1