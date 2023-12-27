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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

vector<ll> fib;
ll f(int n) {
  if (fib[n] != -1) return fib[n];
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (n == 2) return 1;
  ll result = f(n-1) + f(n-2);
  fib[n] = result;
  return result;
}

int main()
{
    int n;
    cin >> n;
    fib.resize(n+1,-1);
    ll ans = f(n);
    cout << ans << endl;
    return 0;
}