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
  // O(N)
  // 奇数の場合は3倍する、偶数の場合は1個だけ3倍すればいい？
  // 偶数の場合複数ある場合は大きい方を/2、それ以外の小さい方を*3する。仮説
  
  // 2を節約する
  vector<ll> a(n);
  int ans = 0;
  rep(i,n) {
    while (a[i] % 2 == 0)
    {
      a[i] /= 2;
      ans++;
    }
  }
  cout << ans << endl;

  // 解説見た
  // 3倍する操作は何回でもできるため、2で割る操作を節約しながら行いたい。 わかる
  // すると2で割る操作はどこかの要素に1回行えばいい。　わかる
  // そのため、求めたい答えは2で割る操作を何回行えるかということになる。？　証明が欲しい、参考記事なかったので一旦飛ばす
  // よって、各要素について2で最高何回割れるかを求めて、総和を取れば答えになる。
  return 0;
}