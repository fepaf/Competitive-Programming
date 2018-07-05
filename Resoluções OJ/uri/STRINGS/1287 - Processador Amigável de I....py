# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Processador Amigável de I...
# Nível: 3
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1287

try :
    while (True):
        n = input()
        n = n.replace("O","0")
        n = n.replace("o","0")
        n = n.replace("l","1")
        n = n.replace(",","")
        n = n.replace(" ","")
        #print(n)
        print(str(int(n)) if (n.isdigit() and int(n)<2**31) else "error")
except:
    pass

