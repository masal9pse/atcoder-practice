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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int t,n,m;
  cin >> t;  
  cin >> n;
  vector<int> a(n);
  vector<bool> is_ate(105);
  rep(i,n) cin >> a[i];
  cin >> m;
  vector<int> b(m);
  vector<bool> is_solds(m);
  rep(i,m) cin >> b[i];

  rep(i,m) {
    rep(j,n) {
      if (is_ate[j]) continue;
      if (b[i]-a[j] >= 0 && b[i]-a[j] <= t) {
        is_solds[i] = true;
        is_ate[j] = true;
        break;
      }
    }
  }

  for (bool b:is_solds)
  {
    if (!b) {
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl;
  return 0;
}