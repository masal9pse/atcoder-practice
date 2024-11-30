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
  string s;
  cin >> s;
  int n = s.size()-1;
  int q;
  cin >> q;
  rep(i,q) {
    ll k;
    cin >> k;
    k--;
    
    if (k <= n) {
      // そのまま対応
      cout << s[k] << " ";
    }
    else {
      // ここもおかしい
      // あまりでいけるときといけない時の違い
      // 偶数か奇数かの違いか？
      // 奇数なら余りの求め方でいけそう k % n
      // 偶数だと　いや違うわ
      ll t = k % n;      
      // 文字変換対応

      cout << s[t] << " ";
    }
  }
  return 0;
}