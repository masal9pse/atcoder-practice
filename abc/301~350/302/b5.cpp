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

// int dx[8] = {-1,-1,0,1,1,-1,0,-1};
// int dy[8] = {0,1,1,1,0,1,-1,-1};
// int dx[8] = {0,-1,-1,1,1,-1,0,-1};
// int dy[8] = {1,0,1,1,0,1,-1,-1};

vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};
int main()
{
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
   グリッド
  */
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  string t = "snuke";
  /**
   * １つづつ文字を探索
   * １つ見たら、８方向から5回探索
   * snukeがあったら探索地からの位置を出力
  */
  rep(i,h) rep(j,w) {
    // ８方向
    rep(k,8) {
      // 移動後の距離
      int nx = i;
      int ny = j;
      string ans = "";
      rep(l,5)
      {
        // 移動時に枠外に出ていないかをチェック
        // メモ　初めに方向の距離を足すと初期値が一個ずれる
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) break;
        ans += s[nx][ny];      
        nx += dx[k],ny += dy[k];
      }
      if (ans == t) {
        nx = i,ny = j;
        rep(l,5)
        {
          printf("%d %d\n",nx+1,ny+1);
          nx += dx[k],ny += dy[k];
        }
        break;
      }
    }
  }
  // 6 6
  // snukeu
  // amkxks
  // zhkbpp
  // hykink
  // esnuke
  // zplvfj

  return 0;
}