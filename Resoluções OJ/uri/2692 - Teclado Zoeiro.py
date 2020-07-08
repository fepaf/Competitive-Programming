# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Teclado Zoeiro
# Nível: 1
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2692

try:
    mp = {}
    n , m = map(int, input().split())
    for i in range(n):
        e , s = input().split()
        mp[e] , mp[s] = s , e
    for i in range(m):
        ans , msg = "" , input()
        for c in msg:
            ans += (mp[c] if c in mp else c)
        print(ans)
except:
    pass

