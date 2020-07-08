# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Escolha Difícil
# Nível: 5
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2702

ca, ba, pa = map(int, input().split())
cr, br, pr = map(int, input().split())
print(max(0,cr-ca)+max(0,br-ba)+max(0,pr-pa))

