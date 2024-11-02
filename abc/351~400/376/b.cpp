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
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 1e8;
const ll MLL = 1e18;

// int f1(int x,int y) {
//   return
// }
int main()
{
  int n, q;
  cin >> n >> q;
  int l = 1;
  int r = 2;
  int ans = 0;
  rep(i, q)
  {
    char h;
    int t;
    cin >> h >> t;
    int junban, gyaku;
    // t % (n-2)して考えるとだいぶ楽だった。
    // 円の問題が出た場合は一列になるように工夫する。
    if (h == 'R')
    {
      junban = abs(t - r);
      gyaku = abs(t - r - n);
    }
    else
    {
      junban = abs(t - l);
      gyaku = abs(t - l - n);
      int kk = 3;
    }

    if (h == 'R')
    {
      if (r == t)
        ans += 0;
      else if (r < t && t < l) {
        ans += junban;
      }
      else {
        ans += gyaku;
      }
      r = t;
      int k = 3;
    }
    else
    {
      if (l == t) {
        ans += 0;
      }
      //  if (l <= t && r < l && t < r) ans += junban;
      else if (l < t && t < r)
      {
        ans += junban;
      }
      else
      {
        ans += gyaku;
      }
      l = t;
      int t2 = 3;
    }
  }

  cout << ans << endl;
  return 0;
}