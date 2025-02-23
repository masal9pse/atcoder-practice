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
const int MI = 1e8;
const ll MLL = 1e18;
// 四方向への移動を表すベクトル
// 下、右、上、左の順
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
// 8方向
// 　あとで方向記載
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--, y--;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  string t;
  cin >> t;
  set<pair<int, int>> visited;
  int now_x = x;
  int now_y = y;

  for (char c : t)
  {
    int next_x = now_x;
    int next_y = now_y;
    if (c == 'U')
      next_x--;
    if (c == 'D')
      next_x++;
    if (c == 'L')
      next_y--;
    if (c == 'R')
      next_y++;

    if (next_x < 0 || next_x >= h || next_y < 0 || next_y >= w)
    {
      continue;
    }

    // 通行可能かどうかを確認
    if (s[next_x][next_y] != '#')
    {
      now_x = next_x;
      now_y = next_y;

      // 家を訪問した場合
      if (s[now_x][now_y] == '@')
      {
        visited.insert({now_x, now_y});
      }
    }
  }
  cout << now_x + 1 << " " << now_y +1 << " " << visited.size() << endl;
  return 0;
}
