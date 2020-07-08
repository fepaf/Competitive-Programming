# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Difícil de Acreditar, Mas...
# Nível: 1
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1728

try:
    while (True):
        eq = input().split("=")
        a , b = eq[0].split("+")
        r = eq[1]
        print(int(a[::-1])+int(b[::-1])==int(r[::-1]))
except:
    pass

