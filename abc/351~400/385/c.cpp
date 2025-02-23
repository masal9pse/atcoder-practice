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

int main()
{
  int n,m;
  cin >> n >> m;
  G g(n);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> dist(n,-1);
  queue<int> que;
  que.push(0);
  dist[0] = 0;

  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    for(int next_v: g[v]) {
      if (dist[next_v] != -1) continue;
      dist[next_v] = dist[v] + 1;
      que.push(next_v);
    }
  }
  
  int ans = 0;
  rep(i,n) ans = max(ans, dist[i]);
  cout << ans << endl;
  return 0;
}