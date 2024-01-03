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
using P = pair<int, int>;
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
    問題文の理解 read m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め plan m
      木とは連結で閉路を持たない(無向)グラフ、かつサイクルがない。
      木構造はDFSと相性が良いことが多い
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, x, y;
  cin >> n >> x >> y;
  G to(n + 1);
  rep(i, n - 1)
  {
    int u, v;
    cin >> u >> v;
    to[u].push_back(v);
    to[v].push_back(u);
  }

  vector<int> ans;
  // &をつけると、外の変数にアクセスできる
  auto dfs = [&](auto f, int v, int p = -1) -> bool
  {
    if (v == x)
    {
      ans.push_back(v);
      return true;
    }
    for (int u : to[v])
    {
      // yと同じ場所に繋がっていたらcontinueしたい
      // 4を無視するやり方をどうするか...
      // アルゴ式で、seenを使わない深さ優先探索の練習をして再チャレンジ
      if (u == p)
        continue;
      if (f(f, u, v))
      {
        ans.push_back(v);
        return true;
      }
    }
    return false;
  };
  dfs(dfs, y);
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}