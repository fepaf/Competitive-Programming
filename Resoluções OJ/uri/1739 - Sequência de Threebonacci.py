# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Sequência de Threebonacci
# Nível: 2
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1739

def f3(x):
    return (str(x).count("3")>0 or x%3==0);
try:
    while (True):
        n = int(input())
        ant, atual = 0, 1
        for i in range(n):
            ant, atual = atual , ant + atual
            while (not f3(atual)):
                ant, atual = atual , ant + atual
        print(atual)
except:
    pass

