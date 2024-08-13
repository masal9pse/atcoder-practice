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
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
//   char tmp;
  int init = 0;
  int ans = 0;
  rep(i,n) {
    // if (i+1 == s.size()) break;
    if (s[i] == s[i+1] && init == 0) {
        ans++;
        init++;
        continue;
    }
    if (s[i] == s[i+1] && init == 1) {
        init = 0;
        continue;
    }
    ans++;
    // init = 0;
    int t = 33;
  }
  cout << ans << endl;
  return 0;
}