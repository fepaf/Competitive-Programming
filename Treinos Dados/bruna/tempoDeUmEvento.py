d1 = int(input().split()[1])
h1, m1, s1 = map(int, input().split(":"))
d2 = int(input().split()[1])
h2, m2, s2 = map(int, input().split(":"))
print(d1,h1,m1,s1)
print(d2,h2,m2,s2)

t1 = s1+m1*60+h1*60*60+d1*24*60*60
t2 = s2+m2*60+h2*60*60+d2*24*60*60

t = t2-t1

w = t//(24*60*60)
t %= (24*60*60)

x = t//(60*60)
t %= (60*60)

y = t//(60)
t %= 60

z = t//1

print(w,x,y,z)