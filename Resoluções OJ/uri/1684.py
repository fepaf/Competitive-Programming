t = int(input())
for caso in range(t):
    n , m = map(int,input().split())
    f = {}
    for i in range(n):
        f[i] = 0
    for i in range(m):
        a , b = map(int,input().split())
        f[a] , f[b] = (f[a] + 1) , (f[b] + 1)
    ans = True
    for i in range(n):
        if (f[i] & 1):
            ans = False
            break
    print("Yes" if ans else "No")
