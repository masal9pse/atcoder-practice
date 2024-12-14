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
  int h,w;
  cin >> h >> w;
  int x0,y0,x1,y1;
  cin >> x0 >> y0 >> x1 >> y1;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  /// 各マスがスタートから見て何手目になるかをメモするための配列
  vector dist(h,vector<int>(w,-1));
  queue<P<int>> que;
  dist[x0][y0] = 0;
  que.push({x0,y0});

  while (!que.empty())
  {
    auto [x,y] = que.front();
    que.pop();

    rep(d,4) {
      int x2 = x + dx[d];
      int y2 = y + dy[d];
      if (x2 < 0 || x2 >= h || y2 < 0 || y2 >= w) continue;
      if (s[x2][y2] == 'B') continue;
      if (dist[x2][y2] != -1) continue;
      dist[x2][y2] = dist[x][y] + 1;
      que.push({x2,y2});
    }
  }
  cout << dist[x1][y1] << endl;
  return 0;
}