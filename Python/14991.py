n = int(input())
b = map(int, input().split())
c = 1

for i in b:
    c <<= 1
    c -= i

    if c < 0:
        print("error")
        exit()

print(c % 1000000007)
