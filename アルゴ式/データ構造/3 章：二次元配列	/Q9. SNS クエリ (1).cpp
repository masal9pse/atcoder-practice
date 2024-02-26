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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{   
  int n,q;
  cin >> n >> q;
  // user_iのフォロワーをsetで管理
  vector<set<int>> g(n);
  rep(i,q) {
    int type;
    cin >> type;
    if (type == 0) {
      int x,y;
      cin >> x >> y;
      g[y].insert(x);
    }
    else {
      int z;
      cin >> z;
      if (g[z].size() == 0) cout << "No" << endl;
      else {
        for(int number:g[z]) cout << number << " ";
        cout << endl;
      }
    }
  }
  return 0;
}