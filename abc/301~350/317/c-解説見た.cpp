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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 4方向
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

// 確かにクラスで管理した方がやりやすい
struct Edge
{
  int to, cost;
  Edge(int to = 0, int cost = 0) : to(to), cost(cost) {}
};

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
      重みつき無効グラフの最長経路
      全探索
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
  */
  int n, m;
  cin >> n >> m;
  vector<vector<Edge>> g(n);
  rep(i, m)
  {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    g[a].emplace_back(b, c);
    g[b].emplace_back(a, c);
  }
  int ans = 0;

  auto dfs = [&](auto f, int v, vector<bool> visited, int dist) -> void
  {
    visited[v] = true;
    ans = max(ans, dist);
    for (auto u : g[v])
    {
      if (visited[u.to])
        continue;
      f(f, u.to, visited, dist + u.cost);
    }
  };
  rep(i,n) dfs(dfs,i,vector<bool>(n),0);
  cout << ans << endl;
  return 0;
}
