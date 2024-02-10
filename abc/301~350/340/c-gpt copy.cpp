#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <cassert>
#include <stack>
#include <queue>
#include <deque>
#include <numeric>
#include <unordered_map>
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

using namespace std;

// メモ化再帰用のマップ
unordered_map<ll, ll> memo;

// 再帰関数
ll f(ll n) {
    // ベースケース: Nが1以下の場合はコスト0
    if (n == 1) return 0;
    // メモがあればそれを返す
    if (memo.count(n)) return memo[n];
    // f(n-n/2)は切り上げの計算
    ll res = f(n/2) + f(n-n/2) + n;
    return memo[n] = res;
}

int main() {
    // 入力の読み込み
    ll N;
    cin >> N;

    // メモ化再帰でコストを計算
    ll result = f(N);

    // 再帰は木構造を意識する、根から一番初めの関数が実行されているイメージ
    // 結果の出力
    cout << result << endl;

    return 0;
}
