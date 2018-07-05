# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: HameKameKa
# Nível: 2
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2591

for i in range(int(input())):
    s = input().split("mek")
    print("k"+("a"*s[0].count("a")*s[-1].count("a")))

