for _ in range(int(input())):
    nome = input()
    notas = list(map(float, input().split()))
    if len(notas) < 2:
        notas.append(0.0)
    notas.sort(reverse=True)
    print(f'{nome}: {sum(notas[:3])/len(notas[:3]):.1f}')

