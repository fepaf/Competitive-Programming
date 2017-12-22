try:
    while (True):
        eq = input().split("=")
        a , b = eq[0].split("+")
        r = eq[1]
        print(int(a[::-1])+int(b[::-1])==int(r[::-1]))
except:
    pass
