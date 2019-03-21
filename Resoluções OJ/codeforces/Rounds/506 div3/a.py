n , k = map(int,input().split())
s = input()
t=n-1
while (s[:t]!=s[-t:]): t -= 1
k = k-1 if (t) else k-2
print(s+s[t:]*k)
