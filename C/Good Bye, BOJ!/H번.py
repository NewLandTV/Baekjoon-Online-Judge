import sys
sys.setrecursionlimit(100000)
input = sys.stdin.readline
print = sys.stdout.write

def solve(start, arr):
    m = len(arr)
    if m == 2:
        return m
    if m == 3:
        return 2 if arr[0] > arr[1] < arr[2] or arr[0] < arr[1] > arr[2] else 3

    for i in range(start, len(arr) - 1):
        if i + 1 >= len(arr):
            return m
        if arr[i - 1] > arr[i] < arr[i + 1] or arr[i - 1] < arr[i] > arr[i + 1]:
            del arr[i]
            return min(m - 1, solve(i, arr))

t = int(input().rstrip())
s = ""
for _ in range(t):
    n = int(input().rstrip())
    if n == 2:
        s += "2\n"
        continue

    a = list(map(int, input().rstrip().split()))
    s += f"{solve(1, a)}\n"
print(s)
