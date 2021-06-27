cifra = {}
vogais = ['a','e','i','o','u']

for i in range(26):
    c = chr(i+ord('a'))
    if (c in ['y','w']):
        continue
    cifra[c] = c

for k in cifra:
    if k in vogais:
        continue

    dif = 26
    prox = k
    for v in vogais:
        if (abs(ord(v)-ord(k)) < dif):
            dif = abs(ord(v)-ord(k))
            prox = v
    cifra[k] += prox

for k in cifra:
    if k in vogais:
        continue
    
    for c in cifra:
        if c in vogais or c <= k:
            continue

        # if k != 'z':
        #     cifra[k] += c
        # else:
        #     cifra[k] += 'z'

        cifra[k] += c if (k!='z') else 'z'
        break
    
p = input()
for c in p:
    print(cifra[c],end='')
print()

        




