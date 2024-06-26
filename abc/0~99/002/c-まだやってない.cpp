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
  double ax,ay,bx,by,cx,cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  // ユークリッド距離　ヘロンの公式
  double a = sqrt((ax-bx) * (ax-bx) + (ay-by) * (ay-by));
  double b = sqrt((bx-cx) * (bx-cx) + (by-cy) * (by-cy));
  double c = sqrt((ax-cx) * (ax-cx) + (ay-cy) * (ay-cy));
  double s = (a+b+c)/2;
  // 小数第3位まで表示
  cout << fixed << setprecision(3) << sqrt(s*(s-a)*(s-b)*(s-c)) << endl; 
  return 0;
}