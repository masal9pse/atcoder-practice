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
  // int n;
  // cin >> n;
  // 0 ~ 5まで出力、6になると条件がfalseになるので落ちる
  // for (int i = 0; i + 3 < 9; i++) cout << i << endl;
  // 部分文字列
  string s,t;
  cin >> s >> t;
  int ans = t.size();
  // 6-3 = 3
  // +2してたけど、0~3で合計4回やってたわ笑
  rep(i,s.size()-t.size()+1) {
    string k = s.substr(i,t.size());
    int cnt = 0;
    rep(j,k.size()) {
      if (t[j] != k[j]) cnt++;
    }
    ans = min(ans,cnt);
  }
  cout << ans << endl;
  return 0;
}