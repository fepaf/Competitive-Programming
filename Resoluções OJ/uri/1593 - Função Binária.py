# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Função Binária
# Nível: 2
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1593

for caso in range(int(input())):
    i , ans = int(input()) , 0
    while (i):
        ans += (i&1)
        i >>= 1
    print(ans)

