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
const int MI = 1e8;
const ll MLL = 1e18;

int n;
string s;
bool f(string s) {
  if (s.size() % 2 == 0) {
    return false;
  }
  int mid = (n+1)/2;
  mid--;
  if (s[mid] != '/') {
    return false;
  }

  rep(i,mid)
  {
    if (s[i] != '1') {
      return false;
    }
  }
  
  rrep(i,(mid+1),n) {
    if (s[i] != '2') {
      return false;
    }
  }

  return true;
}

int main()
{
  cin >> n;
  cin >> s;
  if(f(s)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}