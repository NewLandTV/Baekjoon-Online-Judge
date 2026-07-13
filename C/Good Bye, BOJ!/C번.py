import sys

data = list(map(int, sys.stdin.read().split()))
n, d = data[0], data[1]
y = []
for i in range(n):
    y.append(data[i * 3 + 2:i * 3 + 5])
y.sort()
s = 0
def backtrack(start = 0, time = 0, max_a = 0, max_b = 0):
    global s
    if time <= d:
        s = max(s, max_a + max_b)

    for i in range(start, n):
        t = time + y[i][0]
        if t > d:
            return
        backtrack(i + 1, t, max(max_a, y[i][1]), max(max_b, y[i][2]))
backtrack()
print(s)
