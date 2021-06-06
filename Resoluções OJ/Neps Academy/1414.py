p = int(input())
n = int(input())
r = int(input())

ans = 0
novos = n
while (n<=p):
    novos = novos*r
    n += novos
    ans += 1
print(ans)