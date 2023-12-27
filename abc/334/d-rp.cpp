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

int main()
{
  /*
    問題文の理解 read m
    実装方針決め plan m
      クエリのQ回は答えなので、削減は無理
      rをソートして累積和(d)する

      クエリをQ回見る際に、dを2分探索して同じかつ一番近い値を求めて出力
      ただ一番近い値をどう求めるかが分からん、コードに落とし込みながら考える
    実装 do m
      lower_boundは、指定した key 以上の要素を指定する、つまりケース1の場合
      qiが7だとdの2分探索で取得した値が8になってしまう。
      自作しないとダメかもしれない。

      解説見てupper_boundで取得したもの-1すると答えが出ることが判明
      ただupper_boundの仕様をまだ正しく理解できてないな
  */
  int n, q;
  cin >> n >> q;
  vector<int> r(n);
  rep(i, n) cin >> r[i];
  sort(r.begin(), r.end());
  // O(nq)
  // 計算量削減のアイデアが思い浮かばん => できた。
  
  // 累積和
  vector<ll> d(n + 1);
  for (int i = 0; i < n; i++)
  {
    d[i + 1] = r[i] + d[i];
    // d.at(i + 1) = r.at(i) + d.at(i);
  }
  rep(i, q)
  {
    ll x;
    cin >> x;
    // auto k2 = upper_bound(d.begin(),d.end(),x);
    // より大を見つけてそれも-1をすればいい
    int ans = upper_bound(d.begin(), d.end(), x) - d.begin();
    ans--;
    // - iter.begin()すると取得したもののインデックス番号がわかる
    cout << ans << endl;
  }
  return 0;
}