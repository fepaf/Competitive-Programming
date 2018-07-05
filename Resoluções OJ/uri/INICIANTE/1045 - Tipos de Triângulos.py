# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Tipos de Triângulos
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1045

l=[float(i) for i in raw_input().split(" ")]
l.sort()
c,b,a = l
if (a>=b+c): print("NAO FORMA TRIANGULO")
else:
    if (a*a<b*b+c*c): print("TRIANGULO ACUTANGULO")
    elif (a*a>b*b+c*c): print("TRIANGULO OBTUSANGULO")
    else: print("TRIANGULO RETANGULO")
    if (a==b==c):print("TRIANGULO EQUILATERO")
    elif (a==b or b==c or c==a):print("TRIANGULO ISOSCELES")

