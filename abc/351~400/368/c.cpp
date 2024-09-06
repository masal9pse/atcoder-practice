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
  vector<int> h(n);
  rep(i,n) cin >> h[i];
  ll t = 0;
  rep(i,n) {
    ll q = h[i]/5;
    t += q * 3;
    // h[i] = h[i]%5;
    h[i] -= q * 5;
    while (h[i] > 0)
    {
      t ++;
      if (t%3==0) h[i]-=3;
      else h[i]--;
    }
  }
  cout << t << endl;
  return 0;
}