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
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i] >> b[i];
  vector<P<int>> P(n);
  rep(i,n) {
    P[i].first = b[i]-a[i];
    P[i].second = a[i];
  }
  sort(all(P));
  ll ans = 0;
  rep(i,n) {
    ans += P[i].second;
    if (i == n-1) ans += P[i].first;
  }
  cout << ans << endl;
  return 0;
}