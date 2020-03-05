n = int(input())
a = input().replace(' ','')
zero = (a.count('0') == n)
a = a.split('1')
ans = 1
for z in a[1:-1]:
    ans *= len(z) + 1
print(ans if not zero else 0)