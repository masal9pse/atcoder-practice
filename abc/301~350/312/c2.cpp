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
const int MI = 10e9;
const ll MLL = 1e18;

int main()
{
  // 片方を固定して、残りを2分探索で求めるのやったな
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m);
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];
  sort(all(b));
  int ans = MI;
  rep(i,n) {
    int j = lower_bound(all(b),a[i])-b.begin();
    int tmp = MI,tmp2 = MI;
    if (j < b.size()) tmp = abs(a[i]-b[j]);
    if (j > 0) tmp2 = abs(a[i]-b[j-1]);

    ans = min(ans,tmp);
    ans = min(ans,tmp2);
  }
  cout << ans << endl;
  return 0;
}