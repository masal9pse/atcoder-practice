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
  int n,q;
  cin >> n >> q;
  vector<bool> m(n+1);
  // rrep(i,1,n+1) m[i] = true;
  for (int i = 1; i <= n; i++)
  {
     m[i] = true;
  }
  rep(i,q) {
    int t;
    cin >> t;
    m[t] = !m[t];
    // if (m[t]) m[t] = 
  }
  int ans = 0;
  for(bool b:m) if (b) ans++;
  cout << ans << endl;
  return 0;
}