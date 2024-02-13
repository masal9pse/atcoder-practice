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
  // 実装に悩む場合、20分考えて無理なら答え見る
  // どちらも傾け可能なので、分岐でやっていけばいい 
  // 初めに組み合わせの数の通りを4C2でやっておけば良かった。
  int h1,w1,h2,w2;
  cin >> h1 >> w1 >> h2 >> w2;
  if (h1 == h2) cout << "YES" << endl;
  else if (h1 == w2) cout << "YES" << endl;
  else if (h2 == w1) cout << "YES" << endl;  
  else if (w1 == w2) cout << "YES" << endl;  
  else cout << "NO" << endl;
  return 0;
}