# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Joulupukki
# Nível: 2
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2025

for n in range(int(input())):
    linha = input()
    palavras = linha.split()
    for palavra in palavras:
        if (("oulupukk" in palavra)):
            linha = linha.replace(palavra,"Joulupukki"if palavra[-1]!="." else "Joulupukki.")
    print(linha)

