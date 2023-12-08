# 間違えたわけ
# 1. 掛け算でもOの概念は存在ことを理解していなかった。
# それを防止するには、逐次10 ** 18以上になるかをチェックする必要があった
# 2. 0が含まれるケースを想定していなかった。
import sys

n = int(input())
input_str = input()

# 文字列をスペースで分割して整数のリストに変換
integer_list = list(map(int, input_str.split()))

# 結果を出力して確認
# print(integer_list)

ans = 1
for i in range(n):
    if integer_list[i] == 0:
        print(0)
        sys.exit()

for i in range(n):
    ans *= integer_list[i]
    if 10 ** 18 < ans:
        print(-1)
        sys.exit()

print(ans)