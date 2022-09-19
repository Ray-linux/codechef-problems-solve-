a = int(input())
for i in range(a):
    n = int(input())
    l = list(map(int, input().split()))
    j = {}
    for i in range(len(l)):
        if l[i] not in j:
                j[l[i]] = 1
        else:
            j[l[i]]+=1
    
    l2 = []
    for keys, values in j.items():
        l2.append(values)
    b = max(l2)
    if l2.count(b)>1:
        print("NO")
    else:
        print("YES")