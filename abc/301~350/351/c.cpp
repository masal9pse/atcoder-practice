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
  ll n,k;
  cin >> n >> k;
  // vector<ll> a(n);
  map<ll,ll> mp;
  rep(i,n) {
    ll a;
    cin >> a;
    mp[a] = 1;
  }
  vector<ll> ans;
  // オーバーフロー
  for (ll i = 1; i <= k; i++)
  {
    if (!mp[i]) ans.push_back(i);
  }
  ll res = 0;
  for(ll d:ans) res += d;
  cout << res << endl;
  return 0;
}