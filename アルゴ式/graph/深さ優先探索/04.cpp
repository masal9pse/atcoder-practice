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
  int n, m;
  cin >> n >> m;
  G to(n);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    to[a].push_back(b);
  }
  vector<bool> seen(n);
  auto f = [&](auto f, int v) -> void
  {
    seen[v] = true;
    for (int u : to[v])
    {
      if (seen[u])
        continue;
      f(f, u);
    }
  };
  f(f, 0);
  int ans = 0;
  for (bool b : seen)
  {
    if (!b)
      ans++;
  }
  cout << ans << endl;
  return 0;
}