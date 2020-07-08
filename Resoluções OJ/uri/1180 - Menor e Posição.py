# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Menor e Posição
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1180

n=input()
x=raw_input().split(" ")
menor=int(x[0])
posicao=0
for i in range(1,n):
    if int(x[i])<menor:
        menor=int(x[i])
        posicao=i
print("Menor valor: %i"%menor)
print("Posicao: %i"%posicao)
    

