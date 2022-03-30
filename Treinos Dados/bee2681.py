def fexpo(b, e, m):
    ans = 1
    while (e):
        if (e & 1): ans = (ans * b)%m
        b = (b * b) %m
        e >>= 1
    return ans

x = int(input())

ans = fexpo(2, x, 24*60*60)-1

s = ans % 60

ans //= 60

m = ans % 60

ans //= 60

h = ans % 24

print(f'{h:02}:{m:02}:{s:02}')