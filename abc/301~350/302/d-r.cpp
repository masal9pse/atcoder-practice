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
    問題文の理解 read 9m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め plan m
      O(NM)を解消するにはどうするか
      Nが決まればあとは、Mの範囲がわかる。
      Mを2分探索で解けばいける？O(NlogM)

    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, m;
  cin >> n >> m;
  ll d;
  cin >> d;
  vector<ll> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll ans = -1;
  rep(i, n)
  {
    ll c = a[i] + d;
    // auto c2 = lower_bound(b.begin(),b.end(),c);
    // 見つからなかったら最大値を返さずに-1を返すようにしたいがそのやり方がわからない。
    // ll c2 = *lower_bound(b.begin(),b.end(),c);
    ll c2 = *upper_bound(b.begin(), b.end(), c);
    ll c3 = upper_bound(b.begin(), b.end(), c) - b.begin();
    if (c3 == m) continue;
    int o = 2;
    ll t = a[i] + c2;
    ans = max(ans, t);
  }
  cout << ans << endl;
  return 0;
}