from math import factorial

n = factorial(int(input()))
digits = str(n)[::-1]

for d in digits:
    if d != '0':
        print(d)
        
        break