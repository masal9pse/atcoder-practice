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

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> c(n);
  vector<vector<int>> a(m);
  
  rep(i, n) cin >> c[i];
  rep(i, m) {
    int k;
    cin >> k;
    a[i].resize(k);
    rep(j, k) {
      cin >> a[i][j];
      a[i][j]--; // 0-based indexing
    }
  }

  ll ans = MLL;
  
  // 各動物園を選ぶ/選ばないの全パターンを試す
  for (int mask = 0; mask < (1 << n); mask++) {
    vector<int> count(m, 0);  // 各動物を見た回数を記録
    ll cost = 0;  // 現在のパターンの合計コスト
    
    // 選んだ動物園の動物をカウント
    rep(i, n) {
      if (mask & (1 << i)) {  // i番目の動物園を選んだ場合
        cost += c[i];  // コストを加算
        // その動物園にいる動物のカウントを増やす
        rep(j, m) {
          if (find(all(a[j]), i) != a[j].end()) {
            count[j]++;
          }
        }
      }
    }
    
    // すべての動物が2回以上見られているかチェック
    bool ok = true;
    rep(i, m) {
      if (count[i] < 2) {
        ok = false;
        break;
      }
    }
    
    // 条件を満たす場合、最小コストを更新
    if (ok) {
      chmin(ans, cost);
    }
  }

  if (ans == MLL) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  
  return 0;
}