# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Variações
# Nível: 3
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1632

for t in range(int(input())):
    s = input().lower()
    ans = 1
    for c in s:
        ans *= (3 if c in "aeios" else 2)
    print(ans)

