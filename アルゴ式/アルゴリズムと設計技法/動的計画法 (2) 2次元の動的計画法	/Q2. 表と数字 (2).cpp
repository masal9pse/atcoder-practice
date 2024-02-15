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
using DP = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{  
  int n;
  cin >> n;
  // cout << n << endl;
  DP dp(n,vector<int>(n+100));
  rrep(i,5,n+5) cin >> dp[0][i];
  // rrep(i,5,n+5) cout << dp[0][i] << endl;
  rrep(i,1,n) rrep(j,5,n+5) {
    dp[i][j] += dp[i-1][j-1];
    dp[i][j] += dp[i-1][j];
    dp[i][j] += dp[i-1][j+1];
    dp[i][j] %= 100;
    // cout << dp[i][j] << endl;
  }
  cout << dp[n-1][n+4] << endl;
  return 0;
}