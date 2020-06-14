x , y = map(int, input().split())
l1, h1 = map(int, input().split())
l2, h2 = map(int, input().split())

if ((max(h1,l2)<=x) and (l1+h2<=y)):
	print('S')
elif ((max(h1,h2)<=x) and (l1+l2<=y)):
	print('S')
elif ((max(l1,l2)<=x) and (h1+h2<=y)):
	print('S')
elif ((max(l1,h2)<=x) and (h1+l2<=y)):
	print('S')
elif ((max(h1,l2)<=y) and (l1+h2<=x)):
	print('S')
elif ((max(h1,h2)<=y) and (l1+l2<=x)):
	print('S')
elif ((max(l1,l2)<=y) and (h1+h2<=x)):
	print('S')
elif ((max(l1,h2)<=y) and (h1+l2<=x)):
	print('S')
else : 
    print('N')