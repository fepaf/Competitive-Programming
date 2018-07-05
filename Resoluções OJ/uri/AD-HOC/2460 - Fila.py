# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Fila
# Nível: 5
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2460

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
for x in b:
   a.remove(x)
print(" ".join(str(x) for x in a))

