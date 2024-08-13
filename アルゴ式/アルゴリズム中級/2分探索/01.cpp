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
const int MI = 1e8;
const ll MLL = 1e18;
// 1e8 == 10**8 true
double f(double x) {
  return x*(x*(x+1)+2)+3;
}

int main()
{
  double n;
  cin >> n;
  double left = 0,right = 100;
  while (right - left > 1e-4) // ここの判定がなぜこうなる？
  {
    double mid = (left + right) / 2;
    if (f(mid) < n) left = mid;
    else right = mid;
  }
  double ans = left;
  cout << ans << endl;
  return 0;
}