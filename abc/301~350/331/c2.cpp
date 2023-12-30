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
    問題文の理解 read m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め plan m
      生成AIを参考にするのはあり
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n;
  cin >> n;
  vector<P> pa(n), ans(n);
  rep(i, n)
  {
    int a;
    cin >> a;
    pa[i].first = a;
    pa[i].second = i;
  }
  sort(pa.begin(), pa.end());
  rep(i, n) ans[i].first = pa[i].second;
  int save = pa[n - 1].first;
  int same_save = 0;
  int diff = pa[n - 1].first;
  for (int i = n - 2; i >= 0; i--)
  {
    if (diff != pa[i].first) {
     same_save = save;
     int d = 3;
    }
    if (pa[i].first == pa[i + 1].first)
    {
      if (i != n - 2)
      {
        ans[i].second = same_save;
      }
      save += pa[i].first;
    }
    else
    {
      // 最後の1が2つあるケースの対応ができず
      ans[i].second = save;
      // save += pa[i].first;
      diff = pa[i].second;
    }
  }
  return 0;
}