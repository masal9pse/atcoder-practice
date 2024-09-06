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
  int a,b;
  cin >> a >> b;  
  int ans = 0;
  rrep(x,-200,200) {
    // a,b,x
    if (b-a == x-b) {
    ans++;
    continue;
    }
    // a,x,b
    if (x-a == b-x) {
     ans++;
     continue;
    }
    // b,a,x
    if (a-b == x-a) {
     ans++;
     continue;
    }
    // b,x,a
    if (x-b == a-x) {
    ans++;
    continue;
    }
    // x,a,b
    if (a-x==b-a) {
     ans++;
     continue;
    }
    // x,b,a
    if (b-x==a-b) {
     ans++;
     continue;
    }
    int t = 3;
  }
  cout << ans << endl;
  return 0;
}