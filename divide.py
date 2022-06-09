depth = 0

def divide(x:int, y:int) -> int:
    global depth
    depth = depth + 1
    print('depth: {}, x: {}, y: {}'.format(depth, x, y))
    if x == 0: return (0, 0)
    (q, r) = divide(x//2, y)
    print('depth: {}, x: {}, y: {}, q: {}, r: {}'.format(depth, x, y, q, r,))
    q *= 2
    r *= 2
    if x % 2 == 1:
        r += 1
    if r >= y:
        r -= y
        q += 1
    print('depth: {}, x: {}, y: {}, q: {}, r: {}'.format(depth, x, y, q, r,))
    return (q, r)

x = int(input('input 1: '))
y = int(input('input y: '))

print('{} / {} = {}'.format(x, y, divide(x, y)))