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


ll f(ll r, ll m) {
  return r/m;
}

int main() {
  ll a, m, l, r;
  cin >> a >> m >> l >> r;
  
  l -= a; r -= a;

  if (l < 0) {
    ll X = -l/m+1;
    l += X*m; r += X*m;
    int kk = 3;
  }

  ll ans = f(r, m) - f(l-1, m);
  cout << ans << endl;
  return 0;
}