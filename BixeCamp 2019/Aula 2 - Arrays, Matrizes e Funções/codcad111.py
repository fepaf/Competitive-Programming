consoante = "bcdfghjklmnpqrstvwxyz"
s = input()
for c in consoante:
	s = s.replace(c, '')

print('S' if s==s[::-1] else 'N')
