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
  レベル４なのでやめる
  メモ
  わからない点まとめ   
  */
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<P<int>> ans;
  rep(i,n) {
    if (i+1 != a[i]) {
      a[a[i]-1] = a[i];
      // ans.push_back{(i,a[i]+1)};
      ans.emplace_back(i+1,a[i]);
    }
  }
  cout << ans.size() << endl;
  rep(i,ans.size()) {
    printf("%d %d\n",ans[i].first,ans[i].second);
    // cout << a[i].first << a[]
  }
  return 0;
}