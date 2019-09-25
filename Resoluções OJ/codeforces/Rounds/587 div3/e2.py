def s(n,op):
	ans = 0
	for i in range(20):
		if (n <= 10**i): break
		digs = n - (10**i-1)
		ans += (digs*(digs+1))//2 if (op) else digs

	return ans

for i in range(int(input())):
	k = int(input())
	
	lo, hi = 0, 5*10**8
	while (lo < hi):
		mid = lo + (hi-lo)//2
		if (s(mid, 1) >= k): hi = mid
		else : lo = mid + 1
	k -= s(lo-1, 1)						 
	
	b = lo
	lo, hi = 0, b
	while (lo < hi):
		mid = lo + (hi-lo)//2
		if (s(mid, 0) >= k): hi = mid
		else : lo = mid + 1
	k -= s(lo-1, 0)						
	
	n = lo
	print(n,k)


										 
						  



