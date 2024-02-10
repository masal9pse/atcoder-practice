#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// メモ化再帰用のマップ
unordered_map<long long, long long> memo;

// 再帰関数
long long calculateCost(long long n) {
    // ベースケース: Nが1以下の場合はコスト0
    if (n <= 1) {
        return 0;
    }

    // メモがあればそれを返す
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    // xを選ぶための最小コストを計算
    long long x = (n + 1) / 2;  // 修正点: xの計算方法を変更
    long long cost = n % 2 + calculateCost(x) + x;

    // メモに結果を保存
    memo[n] = cost;

    return cost;
}

int main() {
    // 入力の読み込み
    long long N;
    cin >> N;

    // メモ化再帰でコストを計算
    long long result = calculateCost(N);

    // 結果の出力
    cout << result << endl;

    return 0;
}
