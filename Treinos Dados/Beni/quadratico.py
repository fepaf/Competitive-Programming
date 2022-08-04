def f(a):
    n = len(a)
    ans = a[0]
    psa = [0]

    a.insert(0,0)

    for i in range(n):
        psa.append(psa[-1]+a[i])

    for ini in range(1,n+1):
        for fim in range(ini, n+1):
            soma = psa[fim] - psa[ini-1]
            ans = max(ans, soma)
    return ans

entrada = list(map(int, input().split()))
print(f(entrada))