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
      全て目安20m
      問題文の理解 read
      実装方針決め plan
       解説見た
       根付き木の場合、
      実装 do
      
      ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
       - すぐに解説を見てしまう癖を防止できる
       - １問に何時間も粘りすぎてしまう問題を防止できる
    */
  int n;
  cin >> n;
  G to(n);
  for (int v = 1; v < n; v++)
  {
    int p;
    cin >> p;
    to[p].push_back(v);
  }
  vector<int> siz(n);
  auto dfs = [&](auto f, int v, int p = -1) -> void
  {
    for (int u : to[v])
    {
      f(f,u,v);
    }
    // 今はここで定義すると帰りがけ順になることを覚えておく
    siz[v] = 1;
    for(int u:to[v]) {
      siz[v] += siz[u];
    }
  };
  dfs(dfs,0);
  for(int u:siz) cout << u-1 << endl; 
  return 0;
}