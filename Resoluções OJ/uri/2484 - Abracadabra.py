# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Abracadabra
# Nível: 1
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2484

try:
    while(True):
        s = input()
        s = " ".join(l for l in s)
        t = len(s)
        for i in range(0,t,2):
            print(" "*(i//2)+s[:t-i])
        print()
except:
    pass

