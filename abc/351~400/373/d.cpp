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
const int MI = 10e8;
const ll MLL = 1e18;

using namespace std;

struct Edge
{
  int to;
  long long weight;
};

void findValues(int N, int M, const vector<vector<Edge>> &graph)
{
  vector<long long> x(N, 0); // 各頂点の値を初期化
  vector<bool> visited(N, false);
  queue<int> q;

  // 初期値を0に設定し、最初の頂点をキューに追加
  x[0] = 0;
  visited[0] = true;
  q.push(0);

  while (!q.empty())
  {
    int u = q.front();
    q.pop();

    for (const auto &edge : graph[u])
    {
      int v = edge.to;
      long long weight = edge.weight;

      // 訪れていない頂点の場合
      if (!visited[v])
      {
        x[v] = x[u] + weight; // 新しい値を設定
        visited[v] = true;
        q.push(v);
      }
    }
  }

  // 結果の出力
  for (int i = 0; i < N; ++i)
  {
    cout << x[i] << endl;
  }
}

int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<Edge>> graph(N);
  for (int j = 0; j < M; ++j)
  {
    int u, v;
    long long w;
    cin >> u >> v >> w;
    u--; // 0-indexed
    v--;
    graph[u].push_back({v, w});
  }

  findValues(N, M, graph);

  return 0;
}