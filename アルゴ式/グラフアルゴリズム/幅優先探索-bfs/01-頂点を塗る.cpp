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
  実装 do

  ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
   - すぐに解説を見てしまう癖を防止できる
   - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n, m;
  cin >> n >> m;
  vector<int> dist(n,-1);
  G g(n);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int> que;
  dist[0] = 0;
  que.push(0);
  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    for(int u:g[v]) {
      if (dist[u] != -1) continue;
      dist[u] = dist[v] + 1;
      que.push(u);
    }
  }
  int ans = *max_element(dist.begin(),dist.end());
  cout << ans << endl;
  return 0;
}