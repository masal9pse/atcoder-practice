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
      行き来できるので、無向グラフ
      ルール1は紐づいた街をソートすればいい
      オイラーツアーというらしい
    実装方針決め plan m
      生成AIを参考にするのはあり
    実装 do 30 + 10 m
    　戻る際にまだ辿っていないノードがあるのに、辿ったやつを出力してしまう問題を解消できず...、解説見る
      先頭、発症のノードを根(ルート)という
      生成AIに頼ると、細かいテストケースで落ちることが多々ある

      戻ったらまた出力
      https://atcoder.jp/contests/abc213/submissions/48919937

  */
  int n;
  cin >> n;
  G to(n);
  rep(i, n - 1)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<bool> seen(n);
  rep(i, n) sort(to[i].begin(), to[i].end());
  auto f = [&](auto f, int v) -> void
  {
    cout << v + 1 << " ";
    seen[v] = true;
    for (int u : to[v])
    {
      if (seen[u])
      {
        continue;
      }
      f(f, u);
      cout << v + 1 << " ";
    }
  };
  f(f, 0);
  return 0;
}