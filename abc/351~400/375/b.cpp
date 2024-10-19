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

int main()
{
  int n;
  cin >> n;
  double ans = 0;
  double now_a = 0,now_b = 0;
  rep(i,n) {
    double a,b;
    cin >> a >> b;
    ans += sqrt((now_a-a)*(now_a-a)+(now_b-b)*(now_b-b));
    now_a = a,now_b = b;
  }
  ans += sqrt((now_a-0)*(now_a-0)+(now_b-0)*(now_b-0));
  printf("%.10f\n",ans);
  return 0;
}