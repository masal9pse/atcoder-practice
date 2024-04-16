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
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
    - A,B分からなかったら早い段階で生成AI使うことを検討 
    全探索
  */
  int h,w;
  cin >> h >> w;
  vector<string> a(h);
  rep(i,h) cin >> a[i];
  int n;
  cin >> n;
  vector<int> r(n),c(n),e(n);
  rep(i,n) cin >> r[i] >> c[i] >> e[i];
  rep(i,n) r[i]--,c[i]--;
  int start_i,start_j;
  int now = 0;
  rep(i,h) rep(j,w) {
    if (a[i][j] == 'S') {
    start_i=i;
    start_j = j;
    rep(k,n) {
      if (start_i == r[k] && start_j == c[k]) now = e[k];
     }
    }
  }
  int now_i = start_i,now_j = start_i;
  rrep(i,start_i,h) {
    now_i = start_i,now_j = start_j;
    rrep(j,start_j,w) {
      // if (a[i][j] == '#') continue;
      // 右
      if (j < w-1) {
        if (a[i][j+1] != '#') {
          now_j++;
          rep(k,n) {
            if (now_i == r[k] && now_j == c[k]) now = e[k];
          }
        }
      }
      // 左
      if (j > 0) {
        if (a[i][j-1] != '#') {
        now_j--;
          rep(k,n) {
            if (now_i == r[k] && now_j == c[k]) now = e[k];
          }
        }
      }

      // 下
      if (i < h-1) {
        if (a[i+1][j] != '#') {
        now_i++;
        rep(k,n) {
            if (now_i == r[k] && now_j == c[k]) now = e[k];
          }
        }
      }

      // 上
      if (i > 0) {
        if (a[i-1][j] != '#') {
        now_i--;
        rep(k,n) {
            if (now_i == r[k] && now_j == c[k]) now = e[k];
          }
        }     
      }

      if (now == 0) {
        cout << "No" << endl;
        return 0;
      }
      if (a[now_i][now_j] == 'T') {
       cout << "Yes" << endl;
       return 0;
      }
    }
  }
  return 0;
}