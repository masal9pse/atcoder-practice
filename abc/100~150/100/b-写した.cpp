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
#define rrep(i,j,n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int calc(int x) {
  int ret = 0;
  // xが割り切れなかったらreturn
  while (x % 100 == 0)
  {
    x /= 100;
    ret++;
  }
  return ret;
}

int main()
{
  int d,n;
  cin >> d >> n;
  int cnt = 0,val = 0;
  while (cnt < n)
  {
    val++;
    if (calc(val) == d) cnt++;
  }
  cout << val << endl;
  return 0;
}