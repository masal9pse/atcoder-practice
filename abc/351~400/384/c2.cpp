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
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).rbegin(), (x).rend()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;

// 比較関数
bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    if (a.first != b.first) return a.first > b.first; // 得点で降順
    return a.second < b.second; // 同点の場合は名前で辞書順
}

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> points = {a, b, c, d, e};
    string problems = "ABCDE";
    vector<pair<int, string>> p;
    int n = problems.size();

    for (int bit = 1; bit <= 31; ++bit) {
        int score = 0;
        string name = "";
        for (int i = 0; i < 5; ++i) {
            if (bit & (1 << i)) {
                score += points[i];
                name += problems[i];
            }
        }

        // 得点と名前を格納
        p.push_back({score, name});
    }
    sort(all(p),compare);

    // 結果を出力
    for (const auto& a : p) {
        cout << a.second << endl;
    }

    return 0;
}
