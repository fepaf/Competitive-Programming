# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Problema com a Calculadora
# Nível: 1
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2694

for n in range(int(input())):
    s = ""
    for c in input():
        if (not (c in "0123456789")):
            s += " "
        else:
            s += c
    a , b , c = map(int, s.split())
    print(a+b+c)

