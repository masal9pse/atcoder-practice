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
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> a(n);
  vector<bool> a2(n);
  rep(i, n) cin >> a[i];
  rep(i, m)
  {
    string b;
    cin >> b;
    rep(j, n)
    {
      if (a2[i])
        continue;
      if (a[i].find(b) != string::npos)
      {
        a2[i] = true;
        break;
      }
      if (j == n-1) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}