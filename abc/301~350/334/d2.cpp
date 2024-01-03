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
  問題文の理解 read
  実装方針決め plan
  実装 do

  ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
   - すぐに解説を見てしまう癖を防止できる
   - １問に何時間も粘りすぎてしまう問題を防止できる
*/
  int n, q;
  cin >> n >> q;
  vector<ll> r(n);
  rep(i, n) cin >> r[i];
  vector<ll> sum(n+1);
  rep(i,n) {
    sum[i+1] = sum[i] + r[i];   
  }
  sort(sum.begin(), sum.end());
  rep(i, q)
  {
    int x;
    cin >> x;
    // 3 2 5が出力されるがどういう仕組みだ...
    // やっぱり内部実装知るためにも自作するかーー
    int d = lower_bound(sum.begin(), sum.end(), x) - sum.begin();
    // int d = upper_bound(sum.begin(), sum.end(), x) - sum.begin();
    cout << d << endl;
    int c = 3;
  }
  return 0;
}