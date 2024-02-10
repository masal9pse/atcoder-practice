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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  int n;
  cin >> n;
  // 書き換えのありえる値を-100から100まで試す。

  // aiの最小値を m、最大値を M としたとき、mより小さい xは試す必要がないMより大きい xは試す必要がない
  // 解説の考え方は思いつかなかったけど、なんかコードは同じになってた。
  // けど、２乗の際に足し算してた。

  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int ans = MI;
  rrep(j,-100,101) {
    int sum = 0;
    rep(i,n) {
      // 足し算してた。
      // rep(k,2) sum += (a[i]-j);
      // 2回目に対応できない
      // rep(k,2) sum *= (a[i]-j);
      sum += (a[i]-j) * (a[i]-j);
    }
    ans = min(ans,sum);
  }
  cout << ans << endl;
  return 0;
}