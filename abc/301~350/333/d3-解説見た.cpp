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
      問題文の理解 read 13m
      実装方針決め plan now
       木なのでseenは必要なし、１つ前の親の情報だけでよい
       葉である頂点とは、次数が１のノード
       木構造はdfsと相性良い

       1からdfsしてその次数の部分木の個数が回答
       葉からdfsしてしまうと保守性が低下+計算回数が増える
      実装 do
      解説見る
        下記２点チェック
        実装でつまずいた。部分木の個数をどのタイミングで数えればいいか分からんのでチェック
        実装方針がまちがっていないか
          1からdfsしてその次数の部分木の個数が回答
          解説記事見た感じ間違ってそう


      ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
       - 問題文すら理解できていないのに解説を見てしまう癖を防止できる
       - １問に何時間も粘りすぎてしまう問題を防止できる
    */
  int n;
  cin >> n;
  G to(n);
  rep(i,n-1) {
    int u,v;
    cin >> u >> v;
    u--;
    v--;
    to[u].push_back(v);
    to[v].push_back(u);
  }
  int ans = MI;
  int t = 0;
  vector<bool> seen(n);
  auto dfs = [&](auto f,int v,int p = -1) -> void {
    // ans++;
    t++;
    // if (v == 0) return;
    for(int u:to[v]) {
      // 1
      if (u == p) continue;
      f(f,u,v);
    }
    // 帰りがけがわかる。
    ans = min(t,ans);
    t = 0;
  };
  // まずは8から1まで探索してその個数を求める ok 
  // dfs(dfs,7);
  dfs(dfs,0);
  // 葉である頂点
  cout << ans << endl;
  return 0;
}