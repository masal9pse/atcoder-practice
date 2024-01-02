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
  int n, m;
  cin >> n >> m;
  vector<int> a(m), p(n);
  vector<string> s(n);
  rep(i, m) cin >> a[i];
  rep(i,n) cin >> s[i];
  rep(i, n)
  {
    p[i] += i + 1;
    rep(j, m)
    {
      if (s[i][j] == 'o') p[i] += a[j];
    }
  }
  int max_v = *max_element(p.begin(),p.end());
  rep(i,n) {
    if (p[i] == max_v) {
      cout << 0 << endl;
      continue;
    }
    vector<int> left;
    rep(j,m) {
      if (s[i][j] == 'x') left.push_back(a[j]);
    }
    sort(left.rbegin(),left.rend());
    rep(j,left.size()) {
      p[i] += left[j];
      if (p[i] > max_v) {
        cout << j + 1 << endl;
        break;
      }
    }
  }
  return 0;
}