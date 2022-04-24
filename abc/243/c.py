from operator import truediv


n = input()
int_n = int(n)
list = []
list = []
for i in range(int_n):
    list.append(input().split())

s = input()
for i in range(int_n):    
        list[i][0] = int(list[i][0])
        list[i][1] = int(list[i][1])

flag = False
for i in range (int_n):
    for j in range(int_n):
        if i != j:
            if list[i][1] == list[j][1]:
                if s[i] == "R" and s[j] == "L":
                    flag = True
                elif s[i] == "L" and s[j] == "R":
                    flag = True

if flag:
    print("Yes")
else:
    print("No")