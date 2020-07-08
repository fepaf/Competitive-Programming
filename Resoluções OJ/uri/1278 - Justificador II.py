# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Justificador II
# Nível: 3
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1278

t = 0
while (True):
    n = int(input())
    if (not n): break
    if (t): print()
    linhas , maior = [] , 0
    for caso in range(n):
        linha = input().split()
        nova_linha = " ".join(s for s in linha)
        linhas.append(nova_linha)
        maior = max(maior,len(nova_linha))
    for l in linhas:
        print(l.rjust(maior))
    t +=1

