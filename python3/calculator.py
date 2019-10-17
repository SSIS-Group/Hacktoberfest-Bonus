a = input("enter number 1")
b = input("enter number 2")

add = float(a) + float(b)
sub = float(a) - float(b)
mul = float(a) * float(b)
div = float(a) / float(b)

char = input('enter operator')

if char == '+':
    print(add)

elif char == '-':
    print(sub)

elif char == '*':
    print(mul)

elif char == '/':
    print(div)

