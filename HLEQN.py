t = int(input())
for i in range(t):
    x = int(input())
    c = 0
    for j in range(1, int(x**.5)):
        if((x-(2*j))%(j+2) and t!=2*j):
            c+=1
            break
        
    if c==0:
        print('NO')
    else:
        print('YES')