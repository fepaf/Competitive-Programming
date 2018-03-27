alfabeto = "abcdefghijklmnopqrstuvwxyz"
try:
    while (True):
        for i in range(int(input())):
            x = input().split()
            print(alfabeto[len(x)*3+len(x[0])-4])
except:
    pass
