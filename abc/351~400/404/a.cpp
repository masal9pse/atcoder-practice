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
// chmax -> change maxの略 a,bを比較してbの方が大きい場合、aをbに更新する。
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
// chmin -> change minimumの略 a,bを比較してbの方が小さい場合、aをbに更新する。
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;
// 四方向への移動を表すベクトル
// 下、右、上、左の順
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
// 8方向
//　あとで方向記載
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

// グリッドを90度右回転する関数
vector<string> rotate90(const vector<string>& grid) {
    int n = grid.size();
    vector<string> rotated(n, string(n, '.'));
    rep(i, n) rep(j, n) {
        rotated[j][n-1-i] = grid[i][j];
    }
    return rotated;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];

    int ans = MI;
    // 4通りの回転パターンを試す
    rep(rot, 4) {
        int diff = 0;
        rep(i, n) rep(j, n) {
            if (s[i][j] != t[i][j]) diff++;
        }
        chmin(ans, diff + rot);
        s = rotate90(s);
    }
    cout << ans << endl;
    return 0;
}