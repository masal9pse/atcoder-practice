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

// 右から順
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,-1};

int main()
{
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
  メモ
  わからない点まとめ   
  */
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  string t = "snuke";
  rep(i,h) rep(j,w) {
    rep(v,8) {
      int nx = i,ny = j;
      string ans;
      rep(k,5) {
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        ans += s[nx][ny];
        nx += dx[v],ny += dy[v];
      }

      if (ans == t) {
        nx = i,ny = j;
        rep(k,5) {
          printf("%d %d\n",nx+1,ny+1);
          nx += dx[v],ny += dy[v];
        }
        break;
      }
    }
  }
  return 0;
}