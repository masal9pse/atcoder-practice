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

int distance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main()
{
  int h,w,d;
  cin >> h >> w >> d;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  // 加湿器が置かれる
  vector<pair<int, int>> pos;
  rep(i,h) rep(j,w) {
    if (s[i][j] == '.') pos.emplace_back(i,j);
  }

  int n = pos.size();
  int ans = 0;
  rep(i,n) rep(j,n) {
    if (i == j) continue;
    int x1 = pos[i].first;
    int y1 = pos[i].second;
    int x2 = pos[j].first;
    int y2 = pos[j].second;

    vector<vector<bool>> hot_mat(h,vector<bool>(w));
    rep(x,h) rep(y,w) {
      if (distance(x,y,x1,y1) <= d) {
        hot_mat[x][y] = true;
      }
    }

    rep(x,h) rep(y,w) {
      if (distance(x,y,x2,y2) <= d) {
        hot_mat[x][y] = true;
      }
    }

    int cnt = 0;
    rep(x,h) rep(y,w) {
      if (hot_mat[x][y] && s[x][y] == '.') cnt++;
    }
    ans = max(ans,cnt);
  }
  cout << ans << endl;
  return 0;
}