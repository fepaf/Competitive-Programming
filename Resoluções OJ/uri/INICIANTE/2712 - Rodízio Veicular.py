# Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
# Nome: Rodízio Veicular
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2712


def solve(placa):
    alfabeto, digitos = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" , "1234567890"
    respostas  = ["MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"]
    qdig, qlet = 0 , 0
    for c in placa:
        if (c in alfabeto):
            qlet += 1
        if (c in digitos):
            qdig += 1
    if (qdig==4 and qlet==3 and placa[3]=="-"):
        if (placa[-1]=="1" or placa[-1]=="2"):
            return respostas[0]
        if (placa[-1]=="3" or placa[-1]=="4"):
            return respostas[1]
        if (placa[-1]=="5" or placa[-1]=="6"):
            return respostas[2]
        if (placa[-1]=="7" or placa[-1]=="8"):
            return respostas[3]
        if (placa[-1]=="9" or placa[-1]=="0"):
            return respostas[4]
    return "FAILURE"

for t in range(int(input())):
    print(solve(input()))

