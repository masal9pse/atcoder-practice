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
#include <deque>
#include <numeric>
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;

int main()
{
  int n, m;
  cin >> n >> m;
  G g(n);

  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  rep(i,n) sort(all(g[i]));
  queue<int> q;
  vector<int> dist(n, -1);
  q.push(0);
  dist[0] = 0;
  G ans(n);
  ans[0].push_back(0);
  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    for (int next_v : g[v])
    {
      if (dist[next_v] != -1)
        continue;
      dist[next_v] = dist[v] + 1;
      q.push(next_v);
      ans[dist[next_v]].push_back(next_v);
    }
  }
  for(auto aa: ans) {
    sort(all(aa));
    for(auto a: aa) cout << a << " ";
    cout << endl;
  }
  return 0;
}