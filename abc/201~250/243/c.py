n = int(input())
input_str = input()

# 文字列をスペースで分割して整数のリストに変換
integer_list = list(map(int, input_str.split()))

# 結果を出力して確認
# print(integer_list)

ans = 1

for i in range(n):
    ans *= integer_list[i]

if 10 ** 18 < ans:
    print(-1)
else:
    print(ans)