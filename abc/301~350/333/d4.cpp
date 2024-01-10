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
      1に紐づく部分和グラフの最大値を求める
      もうここに書き込む
      もとの木から頂点 1 と頂点 1 に接続する辺を取り除くと、森ができます。 そして（頂点 1 でない）ある頂点を根としたときの、頂点 1 を根とする部分木の大きさは、n から (根として選んだ頂点が属する連結成分の大きさ) を引いたものになります。

　　n から森の連結成分の大きさのうち最大のものを引いたものになります。
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
  */
  int n;
  cin >> n;
  G to(n);
  rep(i, n - 1)
  {
    int u, v;
    cin >> u >> v;
    u--, v--;
    to[u].push_back(v);
    to[v].push_back(u);
  }
  if (to[0].size() == 1) {
    cout << 1 << endl;
    return 0;
  }
  int ans = n;
  for (int u : to[0])
  {
    auto dfs = [&](auto f, int v, int p = -1) -> int
    {
      int res = 1;
      for (int u : to[v])
      {
        if (p == u) continue;
        res += f(f, u, v);
      }
      return res;
    };
    int now = n - dfs(dfs, u, 0);
    ans = min(ans,now);
  }
  cout << ans << endl;
  return 0;
}