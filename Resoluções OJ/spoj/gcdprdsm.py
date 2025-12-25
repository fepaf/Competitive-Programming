MAXN = 10**6
phi = [i-1 for i in range(MAXN+1)]

def f(n):
    return ((n*phi[n])>>1) if (n!=1) else 1

phi[1] = 1
for i in range(2, MAXN+1):
    for j in range(i+i, MAXN+1, i):
        phi[j] -= phi[i]

ans = [0]*(MAXN+1)
ans[1] += f(1)
for d in range(2, MAXN+1):
    ans[d] += f(d);
    j = 1
    for m in range(d, MAXN+1, d):
        ans[m] += (d*d*f(j))
        j += 1

for _ in range(int(input())):
    print(ans[int(input())])