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
// using P = pair<int, int>;
template<class T> using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 4方向
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

vector<bool> f(int n) {
  vector<bool> d(n+1,true);
  d[0] = false;
  d[1] = false;
  // forから計算量読み取るのも苦手やな、
  // ただこれは海外のインタビューの際にやりなおせばよさそ
  // 倍数ごとに
  for (int i = 2; i <= n; i++)
  {
    if (!d[i]) continue;
    for (int j = i*2; j <= n; j+=i)
    {
      d[j] = false;
    }
  }
  return d;
}

int main()
{
  int n;
  cin >> n;
  vector<bool> ans = f(n);
  int s = 0;
  rep(i,n+1) {
    if (ans[i]) s++;
  }
  cout << s << endl;
  return 0;
}