x = int(input())
print('N' if (x&(x+1) or x==0) else 'S')