# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Somando Inteiros Consecut...
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1149

l=[int(i) for i in raw_input().split(" ")]
for i in range(1,len(l)):
    if (l[i]>0): break
print("%i"%(sum(range(l[0],l[0]+l[i]))))

