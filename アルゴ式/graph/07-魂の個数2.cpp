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
// 周囲 4 マスを探索するときに使う、差分を表す配列
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

// 一つ紐づいたら、そのまま進むわけではない。
int get_num(int x, int j, int w)
{
  // 間違えてhを掛け算してしまっていた
  return x * w + j;
}

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
  */
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  G to(h * w);
  rep(i, h) rep(j, w)
  {
    if (s[i][j] == '.')
      continue;
    int v = get_num(i, j, w);
    rep(d, 8)
    {
      int ni = i + di[d], nj = j + dj[d];
      if (ni < 0 || nj < 0 || ni >= h || nj >= w)
        continue;
      if (s[ni][nj] == '.')
        continue;
      // if (ni == i || nj == j) continue;
      int nv = get_num(ni, nj, w);
      to[v].push_back(nv);

      // jをpush_backすると、同じ値になってしまう
      // to[j].push_back(nj);
    }
  }
  vector<bool> seen(h * w);
  int ans = 0;
  rep(i, h) rep(j, w)
  {
    if (s[i][j] == '.')
      continue;
    int v = get_num(i,j,w);
    auto dfs = [&](auto f, int v) -> void {
      seen[v] = true;
      for(int u:to[v]) {
        if (seen[u]) continue;
        f(f,u);
      }
    };
    if(seen[v]) continue;
    dfs(dfs,v);
    ans++;
  }
  cout << ans << endl;
  return 0;
}