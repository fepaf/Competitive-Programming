# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Dividindo X por Y
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

for i in range(input()):
    x,y=[float(z) for z in raw_input().split(" ")]
    if y: print('{:.1f}'.format(x/y))
    else: print('divisao impossivel')

