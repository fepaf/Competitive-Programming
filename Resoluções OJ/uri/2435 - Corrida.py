# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Corrida
# Nível: 5
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2435

n1 , d1 , v1 = map(int,input().split())
n2 , d2 , v2 = map(int,input().split())
print(n1 if (d1/v1 < d2/v2) else n2)

