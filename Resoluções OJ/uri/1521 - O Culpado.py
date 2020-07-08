# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: O Culpado
# Nível: 3
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1521

def culpado(x):
    return x if (p[x]==x) else culpado(p[x])
while (True):
    n = int(input())
    if (not n): break
    p = [0]
    p.extend(list(map(int,input().split())))
    print(culpado(int(input())))

