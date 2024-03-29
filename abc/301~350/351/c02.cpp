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
  // 汎用性のある考え方
  // Σの公式　総和を求める問題で制約が10^9以上だとこれを使うと思え
  // 現れていないものを求める = 全体 - 現れているもの
  int n,k;
  cin >> n >> k;
  // vector<int> a(n);
  set<int> st;
  rep(i,n) {
    int a;
    cin >> a;
    st.insert(a);
  }
  
  ll sum_k = (ll)k * (k + 1)/2;
  ll sum_a = 0;
  for (int b:st)
  {
    if (b <= k) sum_a += b;
  }
  ll ans = sum_k - sum_a;
  cout << ans << endl;
  return 0;
}