# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Construindo Muralhas
# Nível: 1
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2650

try:
    while(True):
        n, w = map(int,input().split())
        for i in range(n):
            linha = input().split()
            h = int(linha.pop(-1))
            if (h>w):
                print(" ".join(linha))
except:
    pass

