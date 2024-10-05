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
  int n;
  cin >> n;
  vector<int> x(n),p(n);
  rep(i,n) cin >> x[i];
  rep(i,n) cin >> p[i];
  int q;
  cin >> q;
  vector<int> l(q),r(q);
  rep(i,n) cin >> l[i] >> r[i];
  vector<ll> sum(n+1);
  rep(i,n) sum[i+1] = sum[i] + p[i];
  rep(i,q) {
    int j1 = upper_bound(all(x),l[i]) - x.begin();
    int j2 = upper_bound(all(x),r[i]) - x.begin();
    ll ans = sum[j2]- sum[j1];
    cout << ans << endl;
  }
  return 0;
}