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

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int ans = 1 << 30;
  rep(bit,(1 << (n-1))) {
    // 区間内
    int now = 0;
    // 全体の値
    int all = 0;
    rep(i,n) {
      now |= a[i];
      if (bit & (1 << i)) {
        all ^= now;
        now = 0;
      }
    }
    all ^= now;
    ans = min(ans,all);
  }
  cout << ans << endl;
  return 0;
}