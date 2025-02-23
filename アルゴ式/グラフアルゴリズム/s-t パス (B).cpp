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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;

int main()
{
  int n,m,s,t;
  cin >> n >> m >> s >> t;
  G g(n);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    g[a].push_back(b);
  }
  vector<int> dist(n,-1);
  queue<int> que;
  dist[s] = 0;
  que.push(s);

  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    for(int next_v: g[v]) {
        if (dist[next_v] != -1) continue;
        dist[next_v] = dist[v] + 1;
        que.push(next_v);
    }
  }
  vector<P<int>> p;
  rep(i,n) {
    if (dist[i] != -1) {
      p.emplace_back(dist[i],i);
    }
  }
  sort(all(p));
  cout << p.size() << endl;
  for(auto t:p) cout << t.second << " ";
  cout << endl;
  return 0;
}