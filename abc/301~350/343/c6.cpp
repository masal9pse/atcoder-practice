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

bool isCheck(ll n) {
  string s = to_string(n);
  string t = s;
  reverse(all(t));
  return s == t;
}

int main()
{
  /*
    回文立法数はNの1/3しかない
    nが10^9以上ならこのfor文を削減する方針をよく使う。
  */
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll i = 1; i*i*i <= n; i++)
  {
    if (isCheck(i*i*i)) ans = i*i*i;
  }
  cout << ans << endl;
  return 0;
}