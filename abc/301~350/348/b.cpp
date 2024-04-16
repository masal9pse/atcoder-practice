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
  メモ
  わからない点まとめ   
  */
  int n;
  cin >> n;
  vector<double> x(n),y(n);
  rep(i,n) cin >> x[i] >> y[i];
  rep(i,n) {
   double now = 0;
   vector<int> max_list;
   rep(j,n) {
    if (i == j) continue;
    // double t1 = (x[i]-x[j]);
    double t = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
    if (max_list.empty()) {
      max_list.push_back(j);
      now = t;
    }
    else if (t == now) max_list.push_back(j);
    else if (t > now) {
      max_list.clear();
      max_list.push_back(j);
      now = t;
    }
   }
   cout << max_list[0]+1 << endl;
   max_list.clear();
  }
  return 0;
}