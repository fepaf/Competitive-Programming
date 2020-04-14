def wh(x): return wh(x&(x-1))+1 if (x) else 0

print(wh(int(input())))