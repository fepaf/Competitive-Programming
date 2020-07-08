# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Minha Senha Provisória
# Nível: 2
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2714

for t in range(int(input())):
    s = input()
    if (s[:2]=="RA" and len(s)==20):
        i , x = len(s)-1 , ""
        while ("0"<=s[i]<="9"):
            x = s[i] + x
            i -= 1
        if (len(x)==18):
            print(int(x))
        else:
            print("INVALID DATA")
    else:
        print("INVALID DATA")

