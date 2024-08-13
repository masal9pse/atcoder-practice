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
  メモ
  わからない点まとめ   
  */
  int n;
  cin >> n;
  vector<vector<char>> sv(n,vector<char>(100,'A'));
  rep(i,n) {
    string s;
    cin >> s;
    rep(j,s.size()) sv[i][j] = s[j];
  }
  vector<vector<char>> t(100,vector<char>(100,'A'));

  rep(j,100) rep(i,n) {
   t[j][i] = sv[i][j];   
  }
  vector<string> ans(100);
  rep(i,100) {
    int last = -1;
    rep(j,100) {
      if (t[i][j] != 'A') last = j;
    }
    if (last == -1) continue;
    rep(j,100) {
      if (t[i][j] == 'A' && j > last) continue;
      else ans[i]+=t[i][j];
    }
  }
  // rep(i,100) reverse(ans[i].begin(),ans[i].end());
  vector<string> cp(100);
  cp = ans;
  // rep(i,100) {
  //   if ()
  // }
  rep(i,100) {
    if (ans[i].empty()) continue;
    for (int j = (ans[i].size())-1; j >= 0; j--)
    {
      if (ans[i][j] == 'A') ans[i][j] = 'B';
      else break;
    }
  }
  rep(i,100) {
    if (ans[i].empty()) continue;
    rep(j,ans[i].size()) {
      if (ans[i][j] == 'A') cout << '*';
      else if (ans[i][j] == 'B') continue;
      else cout << ans[i][j];
    }
    cout << endl;
  }
  return 0;
}