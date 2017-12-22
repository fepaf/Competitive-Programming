for caso in range(int(input())):
    i , ans = int(input()) , 0
    while (i):
        ans += (i&1)
        i >>= 1
    print(ans)
