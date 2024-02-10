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
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

// 解説見た
// 単純に N,N+1,…
// と順々に試していって「Dをいずれも含まないもの」が初めて登場した時点でそれを出力する方法でいい
set<int> d;
bool isValid(int n) {
  while (n)
  {
    if (d.count(n%10)) return false;
    n /= 10;
  }
  return true;
}

int main()
{
  int n, k;
  cin >> n >> k;
  rep(i,k) {
    int a;
    cin >> a;
    d.insert(a);
  }
  // for (int i = n;;i++)
  while(1)
  {
    if (isValid(n)) {
      cout << n << endl;
      return 0;
    }
    n++;
  }
  return 0;
}
