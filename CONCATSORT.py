for _ in range(int(input())):
    n = int(input())
    cpraid1 = [int(z) for z in input().split()]
    cpraid2 = sorted(cpraid1)
    cpraid3 = [cpraid1.index(cpraid2[0]), 0]
    cpraid4 = [0] * n
    for i in range(2):
        cpraid3[0] = 0
        while cpraid3[0] < n:
            if not cpraid4[cpraid3[0]] and cpraid1[cpraid3[0]] == cpraid2[cpraid3[1]]:
                cpraid4[cpraid3[0]] = 1
                cpraid3[0] += 1 
                cpraid3[1] += 1
            else:
                cpraid3[0] +=1
                
    print("YES" if cpraid3[0] == cpraid3[1] else "NO") 
    
    
    