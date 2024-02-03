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
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

vector<int> a;

int f(int i,int j) {
  if (i == 0 && j == 0) return true;
  if (i == 0 && j != 0) return false;
  bool flag = false;
  if (j>=a[i-1]&& f(i-1,j-a[i-1])) flag = true;
  if (f(i-1,j)) flag = true;
  return flag;
}

int main()
{
    /*
      メモ化再帰する際に、２次元配列が必要になるので茶色になったらやろ
    */
    int n,x;
    cin >> n >> x;
    a.resize(n);
    rep(i,n) cin >> a[i];
    bool ans = f(n,x);
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}