# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Macacos da Torre de Hanoi
# Nível: 5
# Categoria: MATEMÁTICA
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2681

def fexp(b,e,m):
    ans = 1;
    while (e):
        if (e&1):
            ans = (ans*b)%m
        b=(b*b)%m
        e>>=1
    return ans

s = (fexp(2,int(input()),86400)+86399)%86400;
horas , minutos , segundos = (s//3600) , (s%3600)//60 , (s%3600)%60
h1 , h2 = str(horas//10) , str(horas%10)
m1 , m2 = str(minutos//10) , str(minutos%10)
s1 , s2 = str(segundos//10) , str(segundos%10)
print(h1+h2+":"+m1+m2+":"+s1+s2)

