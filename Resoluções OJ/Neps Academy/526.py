a, b, c = map(int, input().split())
x, y, z= map(int, input().split())
ans = 0
ans = max(ans, (x//a)*(y//b)*(z//c))
print(ans)