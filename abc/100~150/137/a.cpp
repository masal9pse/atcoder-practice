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
  int A,B;
  cin >> A >> B;
  // int ans = a + b;
  // ans = max(ans,a-b);
  // ans = max(ans,a*b);
  // C++のmaxだと2つの比較になるが、{}で与えてやるとリストで渡してくれるので、複数個の比較ができる。
  int ans = max({ A + B, A - B, A * B }); 
  cout << ans << endl;
  return 0;
}