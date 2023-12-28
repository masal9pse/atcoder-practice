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
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

struct UnionFind
{
  // parent親の略
  vector<int> par;

  UnionFind() {}
  UnionFind(int n) : par(n, -1) {}
  void init(int n) { par.assign(n, -1); }

  int root(int x)
  {
    if (par[x] < 0)
      return x;
    else
      return par[x] = root(par[x]);
  }

  bool issame(int x, int y)
  {
    return root(x) == root(y);
  }

  bool merge(int x, int y)
  {
    // まず親まで探す
    x = root(x);
    y = root(y);
    if (x == y)
      return false;
    if (par[x] > par[y])
      swap(x, y); // merge technique
    par[x] += par[y];
    par[y] = x;
    return true;
  }

  int size(int x)
  {
    return -par[root(x)];
  }
};

bool solve()
{
  int n, m;
  cin >> n >> m;
  vector<int> d(n);
  UnionFind uf(n);
  rep(i, m)
  {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    d[u]++;
    d[v]++;
    uf.merge(u, v);
  }
  int sum = 0;
  rep(i, n)
  {
    if (d[i] == 0 || d[i] > 2)
      return false;
    if (d[i] == 1)
      sum++;
  }
  if (sum != 2)
    return false;
  // UnionFind uf(n);
  // クエリをすでに入力で受け取っているので、どう取得するか => 入力の際に定義していた。

  /*
  なぜsizeに0を与えると正しくマージした数を取得できる？
  nを入れるとエラー
  */
  int kk = uf.size(0);
  return uf.size(0) == n;
}

int main()
{
  /*
    問題文の理解 read m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め plan m
      下記２点成立していたらYes,そうでなければNo
        1つのノードにつながっているノードが1が2個、かつそれ以外のノードは2つつながっている場合
        ノードが連結である場合
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
      何度もNoやYesの判定処理があるときは関数分けすると楽
  */
  if (solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}