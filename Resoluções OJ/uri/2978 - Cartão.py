a, b, c, d = map(int, input().split())
a, b, c, d = min(a,b) , max(a,b), min(c,d), max(c,d)
if (a>c):
    print('no')
elif (a<=c and b<=d):
    print('yes')
elif (a<=c and b>d and a*a+b*b>c*c+d*d):
    print('no')
elif (a<=c and b>d and a*a+b*b<=c*c+d*d):
    dc = a*a+b*b
    if ((c-(dc-d*d)**0.5)**2 + (d-(dc-c*c)**0.5)**2 >= 4*a*a):
        print('yes')
    else:
        print('no')
