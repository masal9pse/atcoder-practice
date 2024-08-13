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
  int n,m,k;
  cin >> n >> m >> k;
  vector<int> c(m);
  vector<char> r(m);
  vector<vector<int>> a(m);
  rep(i,m) {
    cin >> c[i];
    rep(j,c[i]) {
      int t;
      cin >> t;
      t--;
      a[i].push_back(t);
    }
    cin >> r[i];
  }
  int ans = 0;
  rep(bit,(1 << n)) {
   bool ok = true;
   rep(i,m) {
    int now = 0;
    for(int j:a[i]) if (bit & (1 << j)) now++;
    if (now < k && r[i] == 'o') ok = false;
    if (now >= k && r[i] == 'x') ok = false;
   }
   if (ok) ans++;
  }
  cout << ans << endl;
  return 0;
}