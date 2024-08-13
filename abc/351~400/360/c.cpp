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
  vector<int> a(n),w(n);
  rep(i,n) cin >> a[i]; 
  rep(i,n) cin >> w[i]; 
  map<int,vector<int>> mp;
  rep(i,n) mp[a[i]].push_back(w[i]);
  // rep(i,n) sort(mp[a[i]].begin(),mp[a[i]].end());
  ll ans = 0;
  for(auto m:mp) {
    int size = m.second.size();
    sort(all(m.second));
    for (int j = 0; j < size-1; j++) ans += m.second[j];
  }
  cout << ans << endl;
  return 0;
}