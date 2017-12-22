try:
    while(True):
        s = input()
        s = " ".join(l for l in s)
        t = len(s)
        for i in range(0,t,2):
            print(" "*(i//2)+s[:t-i].center(t))
        print()
except:
    pass
