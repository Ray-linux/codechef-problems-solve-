n = int(input())
for i  in range(n):
    a = int(input())
    b = list(map(int, input().split()))
    k = sum(b) + max(b)
    print(k)