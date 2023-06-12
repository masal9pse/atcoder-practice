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


int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  set<int> s;
  rep(i,n) {
    s.insert(a[i]);
  }
  rep(j,n) {
    int i = x + a[j];
    if (s.count(i)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}