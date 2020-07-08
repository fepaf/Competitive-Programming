# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Código Secreto
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2727

alfabeto = "abcdefghijklmnopqrstuvwxyz"
try:
    while (True):
        for i in range(int(input())):
            x = input().split()
            print(alfabeto[len(x)*3+len(x[0])-4])
except:
    pass

