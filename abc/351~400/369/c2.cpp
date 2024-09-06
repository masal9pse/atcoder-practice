#include <iostream>
#include <vector>

using namespace std;

int countArithmeticSubarrays(const vector<int>& A) {
    int N = A.size();
    vector<vector<bool>> dp(N, vector<bool>(N, false));

    // 長さ1の部分列は常に等差数列
    for (int i = 0; i < N; ++i) {
        dp[i][i] = true;
    }

    // 長さ2以上の部分列について、等差数列か判定
    for (int len = 2; len <= N; ++len) {
        for (int i = 0; i <= N - len; ++i) {
            int j = i + len - 1;
            if (dp[i][j - 1] && A[j] - A[j - 1] == A[j - 1] - A[j - 2]) {
                dp[i][j] = true;
            }
        }
    }

    // 全てのdp[i][j]のtrueの数を数える
    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            if (dp[i][j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> A = {1, 2, 3, 4};
    int result = countArithmeticSubarrays(A);
    cout << result << endl;  // 出力: 10
    return 0;
}