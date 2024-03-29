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
  // wbwbwwbwbw bwwbw
  // wbwbwwbwbwbw
  // w 7
  // b 5
  string t = "wbwbwwbwbwbw";
  string s;
  rep(i,200) s+=t;
  int w_c,b_c = 0;
  for(char c:s) {
    if (c == 'w') w_c++;
    if (c == 'b') b_c++;
  }
  int w,b;
  cin >> w >> b;
  string w_start,b_start;
  // 適切な考察もコードの落とし込みもできてないね、無理だこれは
  // wから始まるケース
  // bから始まるケース
  // wwから始まるケースの場合分け？
  // うーん、解説記事読んでも分からんわ。動画やな
  return 0;
}