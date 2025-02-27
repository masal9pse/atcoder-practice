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
  int n = 8;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    G visited(n,vector<int>(n));
    rep(ai,n) {
      rep(aj,n) {
        if (s[ai][aj] == '.') continue;
        
        // 右
        for (int j = aj; j < n; j++)
        {
          visited[ai][j] = 1;
        }
        
        // 左
        for (int j = aj; j >= 0; j--)
        {
          visited[ai][j] = 1;
        }

        // 上
        for (int i = ai; i >= 0; i--)
        {
          visited[i][aj] = 1;
        }

        // 下
        for (int i = ai; i < n; i++)
        {
          visited[i][aj] = 1;
        }
      }
    }
    int ans = 0;
    rep(i,n) rep(j,n) {
      if (visited[i][j] == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}