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
using namespace std;
using ll = long long;
template<class T> using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  int h,w;
  cin >> h >> w;
  vector<string> a(h);
  rep(i,h) cin >> a[i];
  rep(i,h+2) {
   string ans;
   if (i == 0) rep(j,w+2) ans += '#';
   else if (i == h+1) rep(j,w+2) ans += '#';
   else ans = '#' + a[i-1] + '#';
   cout << ans << endl;
  }
  return 0;
}