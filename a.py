import math

def find_max_k(N):
    k = int(math.log2(N))
    return k

# 例として N = 15 を使います
N = int(input())
result = find_max_k(N)
print(result)
