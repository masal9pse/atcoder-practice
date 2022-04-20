s = input()

array = [0,1,2,3,4,5,6,7,8,9]
for i in range(9):
    for a in array:
        if s[i] == a:
            array.pop(i)

print(array[0])
