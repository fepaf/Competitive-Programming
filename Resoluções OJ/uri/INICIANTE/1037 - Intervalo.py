# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Intervalo
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1037

__author__ = 'F. Arcos'
n=input()
if (0<=n and n<=25): print('Intervalo [0,25]')
elif (25<n and n<=50): print('Intervalo (25,50]')
elif (50<n and n<=75): print('Intervalo (50,75]')
elif (75<n and n<=100): print('Intervalo (75,100]')
else: print('Fora de intervalo')

