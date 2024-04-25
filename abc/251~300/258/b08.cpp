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

int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

int main()
{
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
  メモ
  わからない点まとめ   
  */
  int n;
  cin >> n;
  vector a(n,vector<int>(n));
  rep(i,n) {
    string s;
    cin >> s;
    rep(j,n) {
      a[i][j] = s[j] - '0';
    }
  }
  ll ans = 0;
  rep(i,n) rep(j,n) {
    rep(v,8) {
      int nx = i,ny = j;
      ll t = 0;
      rep(k,n) {
        t = t * 10 + a[nx][ny];
        // nx = (nx + dx[v] + n) % n;
        // ny = (ny + dy[v] + n) % n;

        // -1になったら+4して3、これをmod n
        // 限界値超えたら + 4して8 これを mod n

        // トーラスを場合分け
        nx += dx[v];
        if (nx < 0) nx += n;
        if (nx == n) nx -= n;

        ny += dy[v];
        if (ny < 0) ny += n;
        if (ny == n) ny -= n;
      }
      ans = max(ans,t);
    }
  }  
  cout << ans << endl;
  return 0;
}