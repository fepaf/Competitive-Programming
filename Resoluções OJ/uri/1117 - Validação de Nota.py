# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Validação de Nota
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1117

c=soma=0
while (c<2):
    nota=input()
    if (not(0<=nota<=10)): print("nota invalida")
    else:
        c+=1
        soma+=nota
print("media = %.2f"%(soma/2.0))

