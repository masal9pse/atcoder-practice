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
const int MI = 1e9+1;
const ll MLL = 1e18;

int main()
{
  ll a,b,x;
  cin >> a >> b >> x;  
  ll left = 0,right = MI;
  auto isOK = [&](ll n) -> bool {
    ll d = to_string(n).size();
    ll calc = a * n + b * d;
    // xがlower_boundの第2引数と同じ内容になる。
    return calc <= x;
  };

  while (right - left > 1)
  {
    ll mid = (left + right)/2;
    if (isOK(mid)) left = mid;
    else right = mid;
  }
  cout << left << endl;
  return 0;
}