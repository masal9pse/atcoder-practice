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

// 四方向への移動を表すベクトル
// 下、右、上、左の順
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

int main()
{
  int h,w,D;
  cin >> h >> w >> D;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  vector dist(h,vector<int>(w,-1));
  queue<P<int>> que; 
  rep(i,h) rep(j,w) {
    if (s[i][j] != 'H') continue;
    dist[i][j] = 0;
    que.emplace(i,j);
  }

  while (!que.empty())
  {
    auto [x,y] = que.front();
    que.pop();
    rep(d,4) {
      int x2 = x + dx[d];
      int y2 = y + dy[d];
      // 配列外参照の対応
      if (x2 < 0 || x2 >= h || y2 < 0 || y2 >= w) continue;
      // 壁は計算しない。
      if (s[x2][y2] == '#') continue;
      // すでにメモしたマスは更新しない。
      if (dist[x2][y2] != -1) continue;
      dist[x2][y2] = dist[x][y] + 1;
      que.emplace(x2,y2);
    }
  }
  int ans = 0;
  rep(x,h) rep(y,w) {
    if (dist[x][y] >= 0 && dist[x][y] <= D) ans++;
  }
  cout << ans << endl;
  return 0;
}