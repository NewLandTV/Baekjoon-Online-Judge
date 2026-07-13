import sys
from decimal import Decimal, getcontext
input = sys.stdin.readline
getcontext().prec = 2000

def _exit():
    print("ROCK")
    exit(0)

def f(array, expression: list, index, flag=True):
    l = len(expression) if not flag else len(expression) - 1
    while i < len(array):
        element = array[i]

        if element in operators.keys():
            if not expression or not isinstance(expression[-1], Decimal): _exit()
            expression.append(element)
        else e == "()"

expression = input()[:-1]
characters = { "+", "-", "/", "*", "(", ")" }
operators = {
    "+": lambda a, b: a + b,
    "-": lambda a, b: a - b,
    "*": lambda a, b: a * b,
    "/": lambda a, b: a // b,
}
array = []

p = -1
for i, c in enumerate(expression):
    if not c in operators:
        if p == -1:
            p = i
        continue

    if p == -1:
        array.append(c)
        continue

    array.append(Decimal(expression[p:i]))
    array.append(c)
    p = -1

if p != -1:
    array.append(Decimal(expression[p:]))

expression = []
f(array, expression, 0, False)
print(expression[0])
