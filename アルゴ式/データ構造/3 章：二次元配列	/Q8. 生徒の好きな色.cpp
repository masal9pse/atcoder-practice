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
  int n;
  string t;
  cin >> n >> t;
  int ans = 0;
  rep(i,n) {
    int m;
    cin >> m;
    rep(j,m) {
      string s;
      cin >> s;
      if (s == t) ans++;
    }
  }
  // cout << "\n" << endl;
  cout << ans << endl;
  return 0;
}