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
   -  何時間もかけてACしたものの属人的で再現性がない解き方をしてしまう問題を防止できる
  */
  int n, m;
  cin >> n >> m;
  vector<int> dist(n,-1);
  vector<bool> seen(n);
  G g(n);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int> q;
  // dist[0] = 0;
  seen[0] = true;
  cout << 0 << endl;
  q.push(0);
  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    for(int next_v:g[v]) {
      cout << next_v << " ";
      // if (dist[next_v] != -1) continue;
      // seen[next_v] = true;
      if (seen[next_v]) continue;
      dist[next_v] = true;
      q.push(next_v);
    }
  }
  return 0;
}