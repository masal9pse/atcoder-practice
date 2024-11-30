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
const int MI = 1e8;
const ll MLL = 1e18;

int n;
string s;

int main()
{
  cin >> n;
  cin >> s;
  // ランレングス圧縮を用いて後はO(N)になるようにパワーゲーした。
  /// ランレングス圧縮
  // 11/22文字の塊だけ取り出す。
  vector<pair<char,int>> rle;
  for(char c:s) {
    if (rle.size() && rle.back().first == c) rle.back().second++;
    else rle.emplace_back(c,1);
  }
  if (s.size() == 1) {
    cout << 1 << endl;
    return 0;
  }
  int ans = 1;
  rep(i,rle.size()-2) {
    if (rle[i].first == '1' &&
      rle[i+1].first == '/' &&
      rle[i+2].first == '2' &&
      // rle[i].second  rle[i+2].second && 
      rle[i+1].second == 1
      ) {
      int a;
      if (rle[i].second <= rle[i+2].second) {
        a = rle[i].second;
      } else {
        a = rle[i+2].second;
      }
      // int t = rle[i].second + rle[i+1].second + rle[i+2].second;
      int t = a + rle[i+1].second + a;
      ans = max(ans,t);
    }
  }
  cout << ans << endl;
  return 0;
}