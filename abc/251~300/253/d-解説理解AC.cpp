#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <numeric>
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

ll f(ll n)
{
  return (1 + n) * n / 2;
}

ll f2(ll n, ll a)
{
  return f(n / a) * a;
}

int main()
{
  /*
    全て目安20m
    問題文の理解 read
    実装方針決め plan
    ans = 全ての総和 - aの倍数 - bの倍数 + aとbの最小公倍数の倍数
    これでもとめられる　まさに数学
    実装 do

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = f(n);
  ans -= f2(n, a);
  ans -= f2(n, b);
  ans += f2(n,lcm(a,b));
  cout << ans << endl;
  return 0;
}