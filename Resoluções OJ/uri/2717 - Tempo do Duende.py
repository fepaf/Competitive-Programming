# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Tempo do Duende
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2717

n = int(input())
a , b = map(int,input().split())
print("Deixa para amanha!" if (a+b>n) else "Farei hoje!")

