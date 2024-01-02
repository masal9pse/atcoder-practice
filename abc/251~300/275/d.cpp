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

// vectorの要素番号をnとしてその値を詰めていくと、Nが最大で10^18なので壊れてしまう
vector<ll> memo;

ll f(ll n) {
  if (n == 0) return 1;
  if (memo[n] != -1) return memo[n];
  ll result = (ll)f(n/2) + f(n/3);
  memo[n] = result;
  return result;
}

int main()
{
    /*
      問題文の理解 read m
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め plan m
        生成AIを参考にするのはあり
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    ll n;
    cin >> n;
    // memo.resize(n+1,-1);
    memo.resize(10000000000,-1);
    memo[0] = 1;
    ll ans = f(n);
    cout << ans << endl;
    return 0;
}