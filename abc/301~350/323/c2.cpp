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
    問題文の理解 13m

    実装方針決め m
      3 4
      1000 500 700 2000
      oxxo 3001
      ooxx
      xoxx 503 必要なのは、2000点と1000点があればいける。

      aをソートする際にsの順番も同じにしないといけないな
    実装 30 + 18 m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(m), points(n);
  vector<string> s(n);
  rep(i, m) cin >> a[i];
  rep(i, n) cin >> s[i];
  rep(i, n)
  {
    points[i] += i + 1;
    rep(j, m)
    {
      if (s[i][j] == 'o')
      {
        points[i] += a[j];
      }
    }
  }
  int max_v = *max_element(points.begin(), points.end());
  rep(i, n)
  {
    vector<int> left_p;
    rep(j,m) {
      if (s[i][j] == 'x') left_p.push_back(a[j]);
    }
    sort(left_p.begin(),left_p.end());
    int ans = 0;
    while (points[i] < max_v)
    {
      points[i] += left_p.back();
      left_p.pop_back();
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}