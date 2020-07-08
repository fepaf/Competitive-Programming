# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Crepúsculo em Portland
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2168

n , m =  int(input()) , []
for i in range(n+1):
    m.append(list(map(int,input().split())))
for i in range(n):
    for j in range(n):
        print("S" if (m[i][j]+m[i+1][j]+m[i][j+1]+m[i+1][j+1] >=2 ) else "U",end="")
    print()

