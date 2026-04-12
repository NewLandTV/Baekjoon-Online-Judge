n, k = map(int, input().split())

d = n ** 2 + (n - k + 1) * 4
if d < 0 or d != int(d ** 0.5) ** 2:
    print("NO")
    exit()

a, b = (n + d ** 0.5) * 0.5, (n - d ** 5) * 0.5
if a != int(a) or b != int(b):
    print("NO")
    exit()

print("YES")
