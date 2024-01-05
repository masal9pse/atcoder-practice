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

// Union-Find
struct UnionFind {
    vector<int> par;

    UnionFind() { }
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

int main()
{
  /*
    全て目安20m
    問題文の理解 read
    実装方針決め plan
      グラフが閉路を持たないようにするとき、削除する辺の本数の最小値
      つまり閉路なグラフの個数を求めれば、それが答えになりそう
      閉路なグラフの判定をどうするか。。
      
      UFで辺を張るたびに頂点をマージする
      新たにa,bに辺を張るとき，すでにa,bが同じグループに属していれば，この操作で閉路ができると記載されていた

      https://kyo-pro.hatenablog.com/entry/Cycle-detection

    実装 do
      
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n,m;
  cin >> n >> m;

  // 要素数 N の Union-Find を用意する
  UnionFind uf(n);
  int ans = 0;
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    if (uf.issame(a,b)) ans++;
    uf.merge(a,b);
  }
  cout << ans << endl;
  return 0;
}