def f(a):
    n = len(a)
    ans = a[0]
    for ini in range(n):
        for fim in range(ini, n):
            soma = 0
            for i in range(ini, fim+1):
                soma += a[i]
            # sum(a[ini:fim+1])
            ans = max(ans, soma)
    return ans