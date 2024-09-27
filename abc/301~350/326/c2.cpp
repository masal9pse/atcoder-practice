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
  /*
    ai + mでどこまでのプレゼントを確保できるのかをめぐる式で求める
    あとはaiのindexと上記で求めたindexを引き算して、N回試したあとのmaxを求める。
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(),a.end());
  int ans = 0;
  rep(i,n) {
    ll sum = a[i]+m;
    int j = lower_bound(all(a),sum)-a.begin();
    int range = j - i;
    ans = max(ans,range);
    int t = 3;
  }
  cout << ans << endl;
  return 0;
}