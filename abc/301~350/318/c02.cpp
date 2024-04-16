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

int main()
{
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
    - A,B分からなかったら早い段階で生成AI使うことを検討

    ソートして、Σfi~fd > pの場合はans+=p
    else ans+= Σfi~fd

    累積和
  メモ
  わからない点まとめ   
  */
  int n,d,p;
  cin >> n >> d >> p;
  vector<ll> f(n),s(n+1);
  rep(i,n) cin >> f[i];
  // やっぱ昇順で
  sort(f.rbegin(),f.rend());
  rep(i,n) s[i+1] = s[i]+f[i];

  // パスを買った枚数を全探索
  ll ans = s.back();
  rep(i,n/d+1) {
    // int r = n-i*d;
    ll now = s.back() - (ll)i*p;
    ans = min(ans,now);
  }
  // if ()
  cout << ans << endl;
  return 0;
}