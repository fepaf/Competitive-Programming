# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Tempo de um Evento
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1061

ent=raw_input().split(" ")
d1=int(ent[1])
h1,m1,s1=[int(i) for i in raw_input().split(" : ")]
ent=raw_input().split(" ")
d2=int(ent[1])
h2,m2,s2=[int(i) for i in raw_input().split(" : ")]
r=(d2-d1)*86400+(h2-h1)*3600+(m2-m1)*60+(s2-s1)
print("%i dia(s)"%(r/86400))
print("%i hora(s)"%((r%86400)/3600))
print("%i minuto(s)"%(((r%86400)%3600)/60))
print("%i segundo(s)"%(((r%86400)%3600)%60))


