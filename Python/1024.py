n, l = map(int, input().split())

for i in range(l, 101):
    k = n - (i * (i + 1) >> 1)  # n - (1부터 i까지의 합)

    if k % i:
        continue

    x = k / i + 1

    if x < 0:
        continue

    for j in range(i):
        print(int(x + j), end=" ")

    exit()

print(-1)
