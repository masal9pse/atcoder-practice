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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  // 左手と右手の初期位置を全探索
  int n;
  cin >> n;
  vector<int> a(n);
  vector<char> s(n);
  rep(i,n) cin >> a[i] >> s[i];
  int ans = MI;
  rrep(l,1,101) {
    rrep(r,1,101) {
      int now_l = l;
      int now_r = r;
      int tired = 0;
      rep(i,n) {
        if (s[i] == 'L') {
         tired += abs(a[i]-now_l);
         now_l = a[i];
        }
        else if (s[i] == 'R') {
         tired += abs(a[i]-now_r);
         now_r = a[i];
        }
      }
      ans = min(tired,ans);
    }
  }
  cout << ans << endl;
  return 0;
}