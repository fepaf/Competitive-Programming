# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Coordenadas de um Ponto
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1041

x,y=[float(i) for i in raw_input().split(' ')]
if x==0:
    if y==0: print('Origem')
    else: print('Eixo Y')
elif y==0: print('Eixo X')
elif y>0:
    if x>0: print('Q1')
    else: print('Q2')
else:
    if x<0:print('Q3')
    else: print('Q4')

