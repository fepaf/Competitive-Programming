s = input()
r = s[::-1]
n = len(s)
p=0
for i in range(n):
    if (s[i]!=r[i]):
        p=i
        break
s1 = s[:p]+s[p+1:]
r1 = s1[::-1]
s2 = s[:n-1-p]+s[n-p:]
r2 = s2[::-1]

if (r==s):
    print("YES")
    print(n//2+1)
elif (r1==s1):
    print("YES")
    print(p+1)
elif (r2==s2):
    print("YES")
    print(n-p)
else:
    print("NO")