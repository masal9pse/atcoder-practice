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
    実装方針決め plan m
      とりあえず、頂点0を深さ優先探索して、どこまでいけるか確かめる
      その回数が全頂点数nと同じだったら、Yes
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, m;
  cin >> n >> m;
  G to(n);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<bool> seen(n);
  auto f = [&](auto f,int v)->void {
    seen[v] = true;
    for(auto u:to[v]) {
      if (seen[u]) continue;
      f(f,u);
    }
  };
  f(f,0);
  int count = 0;
  for(bool b:seen) {
    if (b) count++;
  }
  if (count == n) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}