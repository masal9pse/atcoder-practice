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

int main()
{
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m);
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];
  rep(i,m) {
    int left = 0,right = n-1;
    while (left != right)
    {
      int mid = (left + right) / 2;
      if (a[mid] >= b[i]) right = mid;
      else left = mid+1;
    }
    int ans = left;
    cout << ans << endl;
  }
  return 0;
}