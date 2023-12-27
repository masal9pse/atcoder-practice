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

void dfs(int n) {
  if (n == 1) cout << 1 << " ";
  else {
    dfs(n-1);
    cout << n << " ";
    dfs(n-1);
  }
}

int main() {
  int n;
  cin >> n;
  dfs(n);
  cout << endl;
  return 0;
}