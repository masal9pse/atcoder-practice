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
    途中で別の問題にいく場合は、終わったものファイルにrpdのいずれかをつける。
    問題文の理解 read done
      iからAiに向けて矢印を書く
      問題文の理解は完了
    実装方針決め plan 9m
      ufで連結であるかを判定
      連結だった際の出力方法が分からない。

      dfs　これでやる
        一度、走破したところに戻ってきたら今までの結果を出力する。
        seenに次の行き先の頂点を保存して、それ順に出力

      解説見た
        有向グラフなら、グラフ探索アルゴ使わなくても解けるみたい
        各頂点から丁度一つの辺が出ているものをFunctional Graphと呼ぶ
    実装 do
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n;
  cin >> n;
  G to(n);
  rep(i, n)
  {
    int b;
    cin >> b;
    b--;
    to[i].push_back(b);
  }
  vector<int> dist(n, -1);
  rep(v, n)
  {
    auto dfs = [&](auto f, int v) -> void
    {
      dist[v] for (int u : to[v])
      {
      }
    };
    if (dist[])
  }
  return 0;
}