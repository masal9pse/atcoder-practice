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
  // vector<int> t(n),v(n);
  map<int,int> mp;
  int last;
  rep(i,n) {
    int t,v;
    cin >> t >> v;
    mp[t] = v;
    last = t;
  }
  // rep(i,n) cin >> t[i] >> v[i];
  int now = 0;
  for (int i = 1; i <= last; i++)
  {
    if(now) now--;
    if (mp.count(i)) {
      now += mp[i];
    }
  }
  cout << now << endl;
  return 0;
}