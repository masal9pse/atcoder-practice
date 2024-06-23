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
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int n,m;
  cin >> n >> m;
  vector<ll> a(n),b(m);
  vector<bool> ate(n);
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];
  rep(i,m) {
    bool ok = false;
    rep(j,n) {
      if (ate[j]) continue;
      if (b[i] == a[j]) {
        ok = true;
        ate[j] = true;
        // これが抜けてて、麺を複数食ってしまってた。
        break;
      }
    }
    if (!ok) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}