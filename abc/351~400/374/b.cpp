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
  string s,t;
  cin >> s >> t;
  s += '$';
  t += '$';
  if (s == t) {
    cout << 0 << endl;
    return 0;
  }

  int n1 = s.size();
  int n2 = t.size();
  int n = -1;
  n = min(n1,n2);
  rep(i,n) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  /// 大きいサイズの次の番号を出力
  if (n1 < n2) cout << n1+1 << endl;
  else cout << n2+1 << endl;
  return 0;
}

// abcdefg
// abcde
