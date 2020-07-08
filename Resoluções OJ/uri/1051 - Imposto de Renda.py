# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Imposto de Renda
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1051

s=float(input())
r=0;
r+=max(0,s-4500)*0.28
s-=max(0,s-4500)
r+=max(0,s-3000)*0.18
s-=max(0,s-3000)
r+=max(0,s-2000)*0.08
print("Isento" if not r else "R$ %.2f"%r)

