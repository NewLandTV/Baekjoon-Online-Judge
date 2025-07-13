import sys
import math

input = sys.stdin.readline
xa, ya, xb, yb, xc, yc = map(int, input().split())

if (xa - xb) * (ya - yc) == (xa - xc) * (ya - yb):
    print(-1.0)
    exit()

ab = math.sqrt((xa - xb) ** 2 + (ya - yb) ** 2)
ac = math.sqrt((xa - xc) ** 2 + (ya - yc) ** 2)
bc = math.sqrt((xb - xc) ** 2 + (yb - yc) ** 2)
l = [ab + ac, ab + bc, ac + bc]

print((max(l) - min(l)) * 2)