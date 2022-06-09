def multiply1(x:int, y:int) -> int:
    if y == 0:
        return 0
    if y % 2 == 0:
        return 2 * multiply1(x, y//2)
    else:
        return x + 2 * multiply1(x, y//2)

def multiply2(x:int, y:int) -> int:
    if y == 0:
        return 0
    z = multiply2(x, y//2)
    if y % 2 == 0:
        return 2 * z
    else:
        return x + 2 * z   

x = int(input('input 1: '))
y = int(input('input 2: '))
r1 = multiply1(x, y)
r2 = multiply2(x, y)

print('r1: {} * {} = {}'.format(x, y, r1))
print('r2: {} * {} = {}'.format(x, y, r2))