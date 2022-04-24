# from operator import truediv


n = input()
int_n = int(n)
X = []
Y = []
for i in range(int_n):
    x,y = map(int,input().split())
    X.append(x)
    Y.append(y)

s = input()
right_min,left_max = dict(),dict()

for i in range(int_n):
    # 判定処理
    if s[i] == "R":
        if Y[i] in left_max and X[i] < left_max[Y[i]]:
            print('Yes')
            exit(0)
    else:
        if Y[i] in right_min and right_min[Y[i]] < X[i]:
            print('Yes')
            exit(0)

    # dictionaryに値を入れる処理
    if s[i] == "R":
        if Y[i] in right_min and X[i] < right_min[Y[i]]:
            right_min[Y[i]] = min(X[i],right_min[Y[i]])
        else:
            right_min[Y[i]] = X[i]
    else:
        if Y[i] in left_max and left_max[Y[i]] < X[i]:
            left_max[Y[i]] = max(X[i], left_max[Y[i]])
        else:
            left_max[Y[i]] = X[i]

print('No')