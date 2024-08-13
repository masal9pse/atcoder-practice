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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int n,x;
vector<int> a;

bool rec(int i,int sum) {
  if (i == n) {
    // cout << (sum == x) << endl;
    return sum == x;
    // if (sum == x) return true;
    // else return false;
  }
  if (rec(i+1,a[i]+sum)) {
    // cout << (a[i]+sum) << endl;
    return true;
  }
  if (rec(i+1,sum)) return true;

  return false;
}

int main()
{
  cin >> n >> x;
  a.resize(n);
  rep(i,n) cin >> a[i];
  if (rec(0,0)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

