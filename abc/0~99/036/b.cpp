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
#define rrep(i, j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int n;
  cin >> n;
  // グリッドの問題
  /// i,jを入れ替えればいいってことか、n*nだから配列外参照は怒らない
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  cout << "\n" << endl;

  rep(i, n)
  { 
    // 細かい要素の調整ができなかったので、写経ACした
    for (int j = n-1; j >= 0; j--) cout << s[j][i];
    cout << endl;    
  }
  
  return 0;
}