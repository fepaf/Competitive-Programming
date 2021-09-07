# a b c d e f g h i j k l m n o p q r s t u v x z
cifra = {
'a' : 'a',
'e' : 'e',
'i' : 'i',
'o' : 'o',
'u' : 'u',
'b' : 'bac',
'c' : 'cad',
'd' : 'def',
'f' : 'feg',
'g' : 'geh',
'h' : 'hij',
'j' : 'jik',
'k' : 'kil',
'l' : 'lim',
'm' : 'mon',
'n' : 'nop',
'p' : 'poq',
'q' : 'qor',
'r' : 'ros',
's' : 'sut',
't' : 'tuv',
'v' : 'vux',
'w' : '',
'x' : 'xuz',
'y' : '',
'z' : 'zuz'
}
p = input()
for c in p:
    print(cifra[c],end='')
print()
