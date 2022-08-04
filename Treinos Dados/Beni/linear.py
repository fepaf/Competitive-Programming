def f(a):
    n = len(a)
    atual, ans = a[0], a[0]
    for i in range(n):
        atual = max(atual+a[i], a[i])
        ans = max(ans, atual)
    return ans
entrada = list(map(int, input().split()))
print(f(entrada))