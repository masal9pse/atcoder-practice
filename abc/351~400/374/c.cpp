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
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  int n;
  cin >> n;
  vector<int> k(n);

  rep(i,n) cin >> k[i];

  ll total = 0;
  rep(i,n) total += k[i];

  // ビット全探索
  for (int bit = 0; bit < (1 << n); bit++)
  {
    ll a_sum = 0;
    ll b_sum = 0;

    for (int i = 0; i < n; i++)
    {
      // グループA
      if (bit & (1 << i))
      {
        a_sum += k[i]; 
      }
      // グループB
      else
      {
        b_sum += k[i];
      }
    }

    // 2つのグループの合計のうち大きい方の値を求める
    ll max_group_sum = max(a_sum, b_sum);
    total = min(total, max_group_sum);
  }
  cout << total << endl;
  return 0;
}
