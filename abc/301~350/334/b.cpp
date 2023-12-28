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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
/*
問題文の理解 m done
  実装時にミスが生じないためにも、ここは怠らず行う。
  脳死コピペだと実装のバグ修正で詰む
実装方針決め m
  生成AIを参考にするのはあり
  1. すぬけから青木までの距離をひたすら+mして回した分を見るとTLE
  木の位置をvectorで持つみたいなことをしてもTLE

  2. 貪欲法
    距離を求めて、それをmで割るがx、aにクリスマスツリーが含まれているかを判定するやり方が分からない

懸念点
  - 茶色diffなので一旦放置やな
  
  - 木の配置位置がダブっているとき　これ
  - aより小さい場合やRがマイナスな時
    a < xの時、xをaより大きくするように調整する
      ex: xが-4、aが5ならxを9にする 5 + 4
      これによって、右向きのみ考えればいい => いや無理、木の位置がダブってしまう

    a < xの時
      (x - a) / m
    a > xの時

    a == xの時
実装 m
  生成AIに頼ると、細かいテストケースで落ちることが多々ある
*/

ll count(ll a, ll m, ll x)
{
  ll count = 0;
  // ll d = abs(x - a);
  // ll result = d / m;
  // まずは距離を求める
  ll d = 0;
  if (a < x) {
    if (a > )
    d = x - a;
  } else if (a > x){

  } else {
    return 1;
  }
  if (a > 0 && x < 0) d = a + x * -1;
  else if (a < 0 && x < 0) d = a * -1 + x * -1;
  else d = x - a;
  return 0;
}

int main()
{
  // 入力
  ll a, m, l, r;
  cin >> a >> m >> l >> r;  
  ll takahashi_c = count(a, m, l);
  ll aoki_c = count(a, m, r);

  // 出力
  // cout << count << endl;

  return 0;
}