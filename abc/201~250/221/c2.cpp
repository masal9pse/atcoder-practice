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
  string x;
  cin >> x;
  // bool ok = false;
  // for(char c:x){
  //   if (c == '.') ok = true;
  // }
  // if (!ok) {
  //   cout << x << endl;
  //   return 0;
  // }
  int size = -1;
  rep(i,x.size()){
    if (x[i] == '.') size = i;
  }
  string ans = x.substr(size+1);
  while (1)
  {
    if (ans.empty()) break;
    if (ans.back() == '0') ans.pop_back();
    else break;
  }
  if (ans.empty()) ans = x.substr(0,size);
  else ans = x.substr(0,size+1) + ans;
  cout << ans << endl;
  return 0;
}