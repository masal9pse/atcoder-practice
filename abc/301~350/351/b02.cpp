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
  // 汎用性のある考え方
  // 元の位置に戻るような処理はmodを使うとシンプルに解ける
  // 円や時計の問題で応用できそう

  string s = "wbwbwwbwbwbw";
  
  int w,b;
  cin >> w >> b;
  int n = s.size();
  rep(si,n) {
    int cnt = 0;
    // for (int i = si; i < w+b; i++)
    rep(i,w+b)
    {
      if (s[(si+i)%n] == 'w')cnt++;
    }
    if (cnt == w) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}