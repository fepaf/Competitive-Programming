# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Positivos e Média
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

s=p=0
for i in range(6):
    x=input()
    if x>0:
        p+=1
        s+=x
print('{} valores positivos\n{:.1f}'.format(p,s/p))

