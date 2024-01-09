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
  G to(n);
  vector<int> c(m);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b >> c[i];
    a--, b--;
    to[a].push_back(b);
    // to[b].push_back(a);
  }
  int ans = 0;
  rep(v, n)
  {
    vector<int> seen(n);
    int sum = 0;
    auto dfs = [&](auto f, int v, int dist) -> void
    {
      seen[v] = true;
      // sum += c[u];
      // sum += ;
      sum = max(dist, sum);
      for (int u : to[v])
      {
        if (seen[u])
          continue;
        // ここで足すのおかしいそうだな
        // sum += c[u];
        f(f, u, dist + c[u]);
      }
    };
    dfs(dfs, v, 0);
    ans = max(ans, sum);
    int k = 3;
  }
  cout << ans << endl;
  return 0;
}

// void dfs(int v,int sum){
// 	used[v]=1;
// 	ans=max(ans,sum);
// ここ意味わからん
// 	for(int i=1;i<=n;i++)if(!used[i]&&e[v][i])dfs(i,sum+e[v][i]);
// 	used[v]=0;
// }
