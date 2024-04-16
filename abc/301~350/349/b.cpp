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
  string s;
  cin >> s;
  int n = s.size();
  vector<set<char>> t(n+1);
  rep(i,n) {
    int count = 0;
    rep(j,n) {
      if (s[i] == s[j]) count++;      
    }
    t[count].insert(s[i]);
  }
  // cout < "Yes" << endl;
  // cout << 1 << endl;
  rep(i,n+1) {
    if(t[i].size() != 0 && t[i].size() != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  // cout < "Yes" <<
  cout << "Yes" << endl;
  return 0;
}