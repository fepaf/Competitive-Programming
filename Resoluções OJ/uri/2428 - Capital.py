# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Capital
# Nível: 5
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2428

a,b,c,d = map(int, input().split())

print("S" if ((a*b==c*d) or (a*c==b*d) or (a*d==b*c)) else "N")
