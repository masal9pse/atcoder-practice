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

int f(int x,int y) {
  return (x+y)%MI;
}

int main()
{
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
  分かっていることは、f(x,y)の中身を入れ替えても答えは同じ
  */
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  // 累積和　使うと良さげ？

  // 全探索 これをどう削減するか
  ll ans = 0;
  rep(i,n-1) rrep(j,i+1,n) {
    ans += f(a[i],a[j]);
  }
  cout << ans << endl;
  return 0;
}