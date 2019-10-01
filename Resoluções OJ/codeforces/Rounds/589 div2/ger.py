primos, i = [] , 2

while (i*i <= 10**9):
	eh = True
	j = 2
	while (j*j <= i):
		if (i % j == 0):
			eh = False
			break
		j += 1
	if (eh):
		primos.append(str(i))
	i += 1

print('{',','.join(primos),'}')
