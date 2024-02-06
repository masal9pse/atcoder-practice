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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

// ll gcd(ll a,ll b) {
//   if (b == 0) return a;
//   return gcd(b,a%b);
// }

int main()
{
  // 上記の実装方法
  //   1. A と B で割ったあまりを R とする
  //   2. R=0 のときは、B を出力して手続きを終了する (この時点での B が求める最大公約数)
  //   3. R≠0 のときは、A を B に置き換えて、B を R に置き換えて、ステップ 1 に戻る
  ll a,b;
  cin >> a >> b;
  // ライブラリを使用して実装
  ll ans = gcd(a,b);
  cout << ans << endl;
  return 0;
}