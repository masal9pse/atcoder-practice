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
    問題文の理解 m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め m
      生成AIを参考にするのはあり
    実装 m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
      コーナーケースで落ちる。原因不明
  */
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  int t = 0;
  rep(i, n)
  {
    if (s[i] == 'o')
      t++;
    else
    {
      ans = max(t, ans);
      t = 0;
    }
  }
  t = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    if (s[i] == 'o')
      t++;
    else
    {
      ans = max(t, ans);
      t = 0;
    }
  }

  if (ans == 0)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}