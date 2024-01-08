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

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
      とりあえず適当な頂点からdfsしてそれが終わったら加算する
      ２度目にdfsする際は別の連結成分のグラフのdfs関数が呼ばれていることを意味する
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
  rep(i, n)
  {
    int a, b;
    cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<bool> seen(n);
  int ans = 0;
  rep(v, n)
  {
    auto dfs = [&](auto f, int v) -> void {
      seen[v] = true;
      for(int u:to[v]) {
        if (seen[u]) continue;
        f(f,u);        
      }
    };
    if (seen[v]) continue;
    dfs(dfs,v);
    // 連結じゃない部分になったら関数が終わるのでこのタイミングでansを加算
    ans++;
  }
  cout << ans << endl;
  return 0;
}