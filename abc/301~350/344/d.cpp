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
   　正整数 => 自然数
  わからない点まとめ
   - 10^100か10*100か分かんねえわ、後者なら愚直解でいける
   - いや文字1つ(例えばab)に対して、結合する選択肢は10*(n-1)
   つまり、全体だと10*(n-1)*10
   - 正しく計算量見積もりができるようにならないとね

  */
  string s;
  cin >> s;
  int n;
  cin >> n;
  st<string> st;
  rep(i,n) {
    int a;
    cin >> a;
    rep(j,a) {
      string s;
      cin >> s;
      st.insert(s);
    }
  }
  return 0;
}