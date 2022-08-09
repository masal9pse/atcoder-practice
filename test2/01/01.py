def Trib(n):
    a, b, c = 1, 0, 5
    if n == 0:
        return a
    elif n == 1:
        return b
    elif n == 2:
        return c
    else:
        for i in range(n-2):
            a, b, c = b, c, a + b + c
        return c

print([Trib(n) for n in range(29)])
print(Trib)