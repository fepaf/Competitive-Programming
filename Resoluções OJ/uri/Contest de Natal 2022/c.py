p = int(input())
n = int(input())

if p < n :
    print(f'Ainda faltam {n-p} presentes!')
else :
    print(f'Sobraram {p%n} presentes!')