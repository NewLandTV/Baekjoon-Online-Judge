n = int(input())
s = [input() for _ in range(0, n)]

for i in range(0, len(s)):
    print(s[i][::-1])