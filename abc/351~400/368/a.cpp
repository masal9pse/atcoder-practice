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
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<int> result;

  for (int i = n - k; i < n; ++i)
  {
    result.push_back(a[i]);
  }

  for (int i = 0; i < n - k; ++i)
  {
    result.push_back(a[i]);
  }

  for (int i = 0; i < n; ++i)
  {
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}