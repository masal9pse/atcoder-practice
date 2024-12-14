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
  int n,d;
  cin >> n >> d;
  string s;
  cin >> s;
  cout << s << endl;
  rep(i,d) {
    rep(j,s.size()) {
      if (s[j] == '@') s[j]='.';
    }
  }
  int ans = 0;
  rep(i,s.size()) {
    if (s[i] == '@') ans++;
  }
  cout << ans << endl;
  return 0;
}