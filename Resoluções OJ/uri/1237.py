def f(a,b):
    t = max(len(a), len(b))
    for i in range(t-1,-1,-1):
        for j in range(len(a)-i+1):
            if (a[j:j+i] in b):
                return i
    return 0

try:
    while (True):
        a , b= input() , input()
        print(f(a,b))
except:
    pass
