def valida(s,checker):
    b1 , b2 = 0 , 0
    for i in range(9):
        b1 += (i+1)*int(s[i])
    for i in range(9):
        b2 += (9-i)*int(s[i])
    b1 , b2 = (b1%11)%10 , (b2%11)%10
    return ((b1==int(checker[0])) and (b2==int(checker[1])))
try:
    while (True):
        cpf , checker = input().split("-")
        cpf = "".join(cpf.split("."))
        print("CPF valido" if valida(cpf,checker) else "CPF invalido")
except:
    pass
