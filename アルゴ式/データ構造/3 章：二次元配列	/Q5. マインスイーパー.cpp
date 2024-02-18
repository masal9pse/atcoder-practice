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

// 4方向 baseに置いてたけど、グリッドの問題しか使わんから消した
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
  int h,w;
  cin >> h >> w;
  vector grid(h,vector<int>(w));  
  rep(i, h) {
    string s;
    cin >> s;
    rep(j,w) {
      if (s[j] == '#') grid[i][j] = 1;
    }
  }
  int q;
  cin >> q;
  rep(i,q) {
    int x,y;
    cin >> x >> y;
    int ans = 0;
    // 番兵方を用いて解いても見たいな
    // 個人的にはこんな感じで場合分けした方が直感的だな、４方向リストに入れるより
    // 上
    if (x > 0) ans += grid[x-1][y];
    // 左
    if (y > 0) ans += grid[x][y-1];
    // 下
    if (x < h-1) ans += grid[x+1][y];
    // 右
    if (y < w-1) ans += grid[x][y+1];
    cout << ans << endl;
  }
  return 0;
}