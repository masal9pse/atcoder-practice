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

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main()
{
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  // rep(i,h) cout << s[i] << endl;
  int q;
  cin >> q;
  rep(i,q) {
    int x,y;
    cin >> x >> y;
    int cnt = 0;
    // // 上
    // if (x > 0) {
    //  if (s[x-1][y] == '#') cnt++;
    // }
    // // 下 最大のindexは-1すること忘れてた。
    // if (x < h-1) {
    //  if(s[x+1][y] == '#') cnt++;
    // }
    // // 左
    // if (y > 0) {
    //  if(s[x][y-1] == '#') cnt++;
    // }
    // // 右
    // if (y < w-1) {
    //   if(s[x][y+1] == '#') cnt++;
    // }

    // 上記の場合分けを簡略化する
    rep(d,4) {
      int nx = x + dx[d],ny = y + dy[d];
      // 計算結果が枠外じゃなかったら
      // あとでネストじゃない場合もやる
      if (0 <= nx && nx < h && 0 <= ny && ny < w) {
        if (s[nx][ny] == '#') cnt++;
      }
    }    
    cout << cnt << endl;
  }
  return 0;
}