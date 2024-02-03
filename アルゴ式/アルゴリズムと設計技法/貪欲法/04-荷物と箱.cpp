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
    問題文の理解 read m now

    実装方針決め plan m
      生成AIを参考にするのはあり
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  vector<bool> d(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  int ans = 0;
  rep(i, n)
  {
    rep(j, m)
    {
      if (d[j]) continue;
      if (a[i] <= b[j])
      {
        d[j] = true;
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}