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
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;
// 四方向への移動を表すベクトル
// 下、右、上、左の順
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
// 8方向
// 　あとで方向記載
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  // 足場iにおけるコストの最小値
  vector<ll> dp(n);
  rep(i,n) dp[i] = MLL;
  
  dp[0] = 0;
  dp[1] = abs(h[1]-h[0]);
  // もらうdp 明日配るdp
  rrep(i,2,n) {
    chmin(dp[i],dp[i-1] + abs(h[i] - h[i-1]));
    chmin(dp[i],dp[i-2] + abs(h[i] - h[i-2]));
  }
  // これはもらうdp,
  // 配るdpをやる
  cout << dp.back() << endl;
  return 0;
}