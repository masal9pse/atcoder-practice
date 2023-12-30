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
const int M = 1000000005;
const ll MLL = 1e18;

int main()
{
  /*
    問題文の理解 read 2m
      1階からできるだけ高い階に登って最高の階を出力
    実装方針決め plan 3m
      双方向に移動することができるので無向グラフ
      普通にdfsして、 seenがtrueの最高値を出力すればいい

      ノード数が10^9なので普通にやるとTLEしてしまった
      座標圧縮かmapで管理
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n;
  cin >> n;
  G to(M);
  rep(i, n)
  {
    int a, b;
    cin >> a >> b;
    a--;b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<bool> seen(M);
  auto f = [&](auto f, int v) -> void {
    seen[v] = true;
    for(int u:to[v]) {
      if (seen[u]) continue;
      f(f,u);
    }
  };
  f(f,0);
  int ans = -1;
  rep(i,M) {
    if (seen[i]) ans = i;
  }
  cout << ans + 1 << endl;
  return 0;
}