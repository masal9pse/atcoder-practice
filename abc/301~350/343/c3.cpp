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
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (long long i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

// O(N)
bool is_kaibun(ll n)
{
  string s = to_string(n);
  string s2 = s;
  reverse(all(s));
  return s == s2;
}

int main()
{
  ll n;
  cin >> n;
  /*
   メモ
   　正整数 => 自然数
     数学的考察が必要な問題弱すぎるわ
   わからない点まとめ
   - x * x * xのオーバーフロー対策　10^18+1のmodを取るか いやダメだった。
   - 回文判定のO(N)より少ない計算量で求めるやり方
  */
  ll k = n;
  while (1)
  {    
    bool f = false;
    if (is_kaibun(k)) f = true;

    if (!f) {
    k--;
    continue;
    }

    // for(ll x = 1;x*x*x<=k;x++)
    ll t = k % (MLL+1);
    for(ll x = k;((t*t)%(MLL+1)*t)%(MLL+1)>=1;x--)
    // for(ll x = 1;x*x*x<=k;x=x*x*x)
    {
      // ll t = x % (MLL+1);
      if (t * t * t == k) {
      // if (x == k) {
      // if (x*x*x == k) {
        cout << k << endl;
        return 0;
      }
      t = x % (MLL+1);
    }
    k--;
  }
  return 0;
}