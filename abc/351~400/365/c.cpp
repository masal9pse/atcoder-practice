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
  ll m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  auto f = [&](int x) -> bool {
    ll sum = 0;
    rep(i,n) sum += min(x,a[i]);
    return sum <= m;
  };
  if (f(MI+1)) cout << "infinite" << endl;
  else {
    int ac = 0,wa = MI+1;
    while (ac + 1 < wa)
    {
        int mid = (ac + wa) / 2;
        if (f(mid)) ac = mid;
        else wa = mid; 
    }
    cout << ac << endl;
  }
  return 0;
}