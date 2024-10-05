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
  //ソートする必要があるのじゃ…
  vector<int> a = {1, 4, 4, 7, 7, 8, 8, 11, 13, 19};

  //イテレータを返す
  int Iter1 = lower_bound(all(a), 4)-a.begin();
  int Iter2 = upper_bound(all(a), 4)-a.begin();
  // int n,q;
  // cin >> n >> q;
  // vector<int> r(n);
  // rep(i,n) cin >> r[i];
  // vector<ll> a(n+1);
  // sort(all(r));
  // rep(i,n) a[i+1] = r[i] + a[i];

  // rep(i,q) {
  //   ll x;
  //   cin >> x;
  //   if (x >= a.back()) {
  //     cout << a.size()-1 << endl;
  //     continue;
  //   }
  //   int j = lower_bound(all(a),x)-a.begin();
  //   if (a[j] == x) cout << j << endl;
  //   else if (x < a[j]) cout << j-1 << endl;
  // }
  return 0;
}