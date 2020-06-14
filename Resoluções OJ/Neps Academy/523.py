x , y = map(int, input().split())
l1, h1 = map(int, input().split())
l2, h2 = map(int, input().split())
    
x, y = min(x,y), max(x,y)
l1, h1 = min(l1, h1), max(l1, h1)
l2, h2 = min(l2, h2), max(l2, h2)

if ((max(l2,h1)<=x) and (l1+h2<=y)):
	print('S')
elif ((max(l1,h2)<=x) and (l2+h1<=y)):
	print('S')
elif ((max(h1,h2)<=x) and (l1+l2<=y)):
	print('S')
elif ((max(l2,l1)<=x) and (h2+h1<=y)):
	print('S')
else : 
    print('N')