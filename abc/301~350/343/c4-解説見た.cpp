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
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (long long i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

// 全探索　O(N^1/3)
// O(N)
bool is_kaibun(ll n)
{
  string s = to_string(n);
  string s2 = s;
  reverse(all(s));
  return s == s2;
}

int main()
{
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll x = 1; x*x*x <=n ; x++)
  {
   if (is_kaibun(x*x*x)) ans = x*x*x;
  }
  cout << ans << endl;
  return 0;
}