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

vector<P<ll>> prime_factorize(ll n) {
  vector<P<ll>> res;
  for (ll p = 2; p <= n; p++)
  {
    if (n % p != 0) continue;
    int e = 0;
    while (n%p == 0)
    {
      e++;
      n/=p;
    }
    res.emplace_back(p,e);
  }
  if (n != 1) res.emplace_back(n,1);
  return res;
}

int main()
{
  /*  
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 素因数分解
  */
  ll n;
  cin >> n;
  const auto& pf = prime_factorize(n);
  for(auto [p,e]: pf) {
    for (int i = 0; i < e; i++)
    {
      cout << p << " ";
    }
  }
  cout << endl;
  return 0;
}