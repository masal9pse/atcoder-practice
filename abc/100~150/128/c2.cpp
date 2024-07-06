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

int main() {
  // 2**30 > 10**8 なので、30本以上鍵があるとビット全探索が使えない
  int n,m;
  cin >> n >> m;
  vector<vector<int>> s(m);
  rep(i,m) {
    int k;
    cin >> k;
    rep(j,k) {
        int t;
        cin >> t;
        t--;
        s[i].push_back(t);
    }
  }
  vector<int> p(m);
  rep(i,m) cin >> p[i];
  int ans = 0;
  rep(bit,(1 << n)) {
    vector<bool> on(n);
    rep(i,n) {
      if (bit & (1 << i)) on[i] = true;
    }
    // 全ての電球が点灯しているか
    bool all = true;
    rep(i,m) {
      int count = 0;
      for (int t:s[i])
      {
        if (on[t]) count++;
      }
      if (count % 2 != p[i]) all = false;
    }
    if (all) ans++;
  }
  cout << ans << endl;
  return 0;
}
