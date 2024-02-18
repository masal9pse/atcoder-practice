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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  // 実装に悩む場合、20分考えて無理なら答え見る
  int h, w, n;
  cin >> h >> w >> n;
  // 3重はいける
  string t;
  cin >> t;  
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  int ans = 0;
  rrep(i, 1, h) rrep(j, 1, w)
  {
    if (s[i][j] == '#') continue;
    int count = 0;
    // 操作時のx,y
    int dx = i,dy = j;
    rep(k, n)
    {
      // 海(#)の場合はbreak
      int x,y;
      if (t[k] == 'L') x = 0,y = -1;
      if (t[k] == 'R') x = 0,y = 1;
      if (t[k] == 'U') x = -1,y = 0;
      if (t[k] == 'D') x = 1,y = 0;
      // ここにハマってた
      dx = dx + x,dy = dy + y;
      if (s[dx][dy] == '#') {
        break;
      }
      else count++;
      if (count == n) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}