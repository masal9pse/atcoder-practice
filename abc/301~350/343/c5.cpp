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
  /*
    xが10^6まで、これを超えるとnの10^18を超える
  */
  ll t = 1e6; // 1000000 0が6個
  ll t2 = 10e6; // 10000000 0が7個
  for (ll x = 1e6; x >= 1; x--)
  {
    ll k = x*x*x;
    // if (k != n) continue;
    if (k > n) continue;
    if (is_kaibun(k)) {
      cout << k << endl;
      return 0;
    }
  }
  
  return 0;
}