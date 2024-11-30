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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    // ボールの色ごとにカウントする
    map<int, int> color_count;
    color_count[a1]++;
    color_count[a2]++;
    color_count[a3]++;
    color_count[a4]++;

    int result = 0;
    // 各色ごとに捨てられるペアの数を計算
    for (auto a: color_count) {
        result += a.second / 2;
    }

    cout << result << endl;
    return 0;
}