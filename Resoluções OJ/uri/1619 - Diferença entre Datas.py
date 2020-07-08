# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Diferença entre Datas
# Nível: 4
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1619

from datetime import date

for caso in range(int(input())):
    data1 , data2 = input().split()
    a1 , m1 , d1 = map(int,data1.split('-'))
    a2 , m2 , d2 = map(int,data2.split('-'))
    ans = abs(date(a1,m1,d1) - date(a2,m2,d2))
    print(ans.days)

