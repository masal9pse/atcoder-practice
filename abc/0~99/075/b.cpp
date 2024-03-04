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
  // グリッド、やるだけ
  // これ自力ACしたの嬉しい
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  vector a(h, vector<int>(w));
  rep(i, h) cin >> s[i];
  rep(i, h) rep(j, w)
  {
    if (s[i][j] == '#')
      continue;
    // 左上
    if (i > 0 && j > 0)
    {
      if (s[i - 1][j - 1] == '#')
        a[i][j]++;
    }
    // 上
    if (i > 0)
    {
      if (s[i - 1][j] == '#')
        a[i][j]++;
    }
    // 右上 -1するの忘れてた。
    if (i > 0 && j < w-1)
    {
      if (s[i - 1][j + 1] == '#')
        a[i][j]++;
    }
    // 右
    if (j < w-1)
    {
      if (s[i][j + 1] == '#')
        a[i][j]++;
    }
    // 右下
    if (i < h-1 && j < w-1)
    {
      if (s[i + 1][j + 1] == '#')
        a[i][j]++;
    }
    // 下
    if (i < h-1)
    {
      if (s[i + 1][j] == '#')
        a[i][j]++;
    }
    // 左下
    if (i < h-1 && j > 0)
    {
      if (s[i+1][j - 1] == '#')
        a[i][j]++;
    }
    // 左
    if (j > 0)
    {
      if (s[i][j - 1] == '#')
        a[i][j]++;
    }
  }
  rep(i, h)
  {
    rep(j, w)
    {
      if (s[i][j] == '#')
      {
        cout << s[i][j];
        continue;
      }
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}