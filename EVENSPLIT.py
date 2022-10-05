t = int(input())
while t>0:
    n = int(input())
    s = input()[:n]
    t = t-1
    res = ''.join(sorted(s))
    print(res)
    # count = 0   
    # for i in range(len(s)):
    #     if s[i] == "1":
    #         count +=1


    # if count ==0:
    #     print(s)
    # elif count == len(s):
    #     print(s)
    # else:
    #     for i in range(len(s)-count):
    #         print("0", end="")
    #     for i in range(count):
    #         print("1", end="")
    #     print("")