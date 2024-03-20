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
  string s;
  cin >> s;  
  if (s[0] != '<') {
    cout << "No" << endl;
    return 0;
  }
  if (s.back() != '>') {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 1; i <= s.size()-2; i++)
  {
    if (s[i] != '=') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}