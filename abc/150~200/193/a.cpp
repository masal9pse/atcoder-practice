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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int a,b;
  cin >> a >> b;
  // なんでこれ1になる？もう演算子の順番を理解した方が早いね
  double ans = (double) (1-b/a)*100;
  // double ans = (double) b/a;
  // cout << 1.0-0.8 << endl;
  // cout << 1.0-ans << endl;
  printf("%.4f\n",ans);
  return 0;
}