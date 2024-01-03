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
      生成AIを参考にするのはあり
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;
  G to(n);
  rep(i, n - 1)
  {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    to[u].push_back(v);
    to[v].push_back(u);
  }
  vector<bool> seen(n);
  vector<int> ans;
  auto f = [&](auto f, int v) -> void {
    // cout << v + 1 << endl;
    ans.push_back(v);
    if (v+1 == y+1) return;
    seen[v] = true;
    for(int u:to[v]) {
      // yと同じ場所に繋がっていたらcontinueしたい
      // 4を無視するやり方をどうするか...
      
      if (same && u != y) continue;
      if(seen[u]) continue;
      f(f,u);
    }
  };
  f(f,y);
  return 0;
}