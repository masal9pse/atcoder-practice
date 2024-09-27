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
  int n,q;
  cin >> n >> q;
  vector<int> a(n),x(q);
  rep(i,n) cin >> a[i];
  rep(i,q) cin >> x[i];
  sort(a.begin(),a.end());
  /* 
   lower_boundでx_i以上のa_iのindexを求められる。100,130,300の内、120以上なのは2人
   lower_boundで境界値が求められるので全体-x_i以下のものを出力する。
  */
  rep(i,q) {
    int j = lower_bound(all(a),x[i])-a.begin();
    int ans = (int) (a.size()-1) - (j-1);
    cout << ans << endl;
  }
  return 0;
}