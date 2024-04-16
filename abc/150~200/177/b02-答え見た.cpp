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
  cin >> s;
  cin >> t;
  // |s|-|t|+1が、sのスタート位置　入力１だと6-3+1で4回回せる
  // あとは、tと合致するか見て合致しなかったらカウント+1して、
  // ４回回したあとの最小値を求めればいい。
  // 割と自力AC
  int ans = 1e9;
  rep(i,s.size()-t.size()+1) {
    int cnt = 0;
    rep(j,t.size()) {
      if (s[i+j] != t[j]) cnt++;
    }
    ans = min(ans,cnt);
  }
  cout << ans << endl;
  return 0;
}