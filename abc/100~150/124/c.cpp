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
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  // si-1を見て0ならsiを0に、1なら1に変える。
  // s[2] = 1　これってO(1)だからsiの細かい判定はいらないはず
  string s;
  cin >> s;
  int n = s.size();
  string t = s;
  for (int i = 1; i < n; i++)
  {
    if (t[i-1] == '0') t[i] = '1';
    else t[i] = '0';
  }
  int ans = 0;
  rep(i,n) {
    if (s[i] != t[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}