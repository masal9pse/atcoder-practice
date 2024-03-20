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
  map<char,ll> m;
  string march = "MARCH";
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  rep(i,n) m[s[i][0]]++;
  ll ans = 0;
  rep(a,5) rrep(b,a+1,5) rrep(c,b+1,5) ans += m[march[a]] * m[march[b]] * m[march[c]];
  cout << ans << endl;
  return 0;
}