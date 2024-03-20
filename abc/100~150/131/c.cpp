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
const int MI = 10e8;
const ll MLL = 1e18;

ll f(ll x,ll c,ll d) {
  ll res = x;
  res -= x/c;
  res -= x/d;
  // 解説では自作しているけど、茶色までは問題を解くことを優先
  res += x/lcm(c,d);
  return res;
}

int main()
{
//  復習
//     解説記事見たメモ
//       理解すること＋どうやったらその問題を初見で解けるか考える
//       解説読んで大方理解できるが、落とし込みが面倒な時
//         写経での解説ACでいい、ただし理解が9割できてからACすること
//         解説読んでもわからないときに、とりあえず写経してみると案外理解が深まることがある。

//         A〜B - Cで割り切れるもの - Dで割り切れるもの

//         だとCかつDで割り切れるものが重複してしまう。よって、それを足してやる必要がある。
//         CとDでも割り切れるとはC,Dのlcmの倍数である。
//         ベン図をかくとわかる。
// 　　lcmはstdに入っているから実装する必要はない、内部ではgcdが使われている。
//     解説動画見たメモ
//     コーナーケース　解説後
//     参考記事リンク    
//     関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
//       ex: 最小公倍数 lcm
//     ステータス　解説AC 理解度8割
 ll a,b;
 ll c,d;
  cin >> a >> b >> c >> d;
  // なんでこれ-1しないとダメなんだ
  // [A,B] = f(B)-f(A-1)
  // 1~3は3個あるが、普通に3-1すると2になってしまう。なので、1を0にして3-0で計算するという
  // 認識でおけ？
  ll ans = f(b,c,d) - f(a-1,c,d);
  cout << ans << endl;
  return 0;
}