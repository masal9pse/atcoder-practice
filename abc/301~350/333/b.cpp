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
  */
  vector<string> a = {"AB", "AE", "BC", "CD", "DE"};

  string s, t;
  cin >> s;
  cin >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  int count = 0;
  rep(j, 5)
  {
    if (s == a[j])
      count++;
    if (t == a[j])
      count++;
  }
  if (count == 2 || count == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}