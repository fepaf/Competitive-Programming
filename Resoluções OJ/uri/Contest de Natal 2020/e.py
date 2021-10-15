b = int(input())
g = int(input())
f = (g//2)-b
if (f<=0): print("Amelia tem todas bolinhas!")
elif (f==1): print("Falta 1 bolinha")
elif (f>0): print("Faltam %s bolinhas"%(f))