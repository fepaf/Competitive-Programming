# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Letras
# Nível: 5
# Categoria: AD-HOC
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2457

p = input()
words = input().split()

cnt = 0
for word in words:
	if (p in word):
		cnt += 1
		
print("%.1f"%(100*cnt/len(words)))
