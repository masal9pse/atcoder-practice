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
    問題文の理解 read 8m max20m
    実装方針決め plan max20m
    実装 do max20m

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n;
  cin >> n;
  G to(n);
  rep(i, n-1)
  {
    int p;
    cin >> p;
    to[p].push_back(i+1);
    to[i+1].push_back(p);
  }
  vector<int> ans;
  auto dfs = [&](auto f,int v,int p=-1) -> void {
    ans.push_back(v);
    for(int u:to[v]) {
      // 今のところ有効グラフになっているのでこれいらない？
      if (u == p) continue;
      f(f,u,v);
    }
  };
  dfs(dfs,0);
  rep(i,ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}