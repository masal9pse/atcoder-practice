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
  // atcoder toe
  // verticalreading agh
  string s,t;
  cin >> s >> t;
  int n = s.size();
  for (int w = 1; w < n; w++)
  {
    vector<string> l;
    for (int i = 0; i < n; i+=w)
    {
      string t = s.substr(i,w);
      l.push_back(t);
    }
    int c = w;
    bool ok = false;
    rep(i,c) {
      string sum;
      for(string u:l) {
        if (u.size() <= i) continue;
        sum += u[i];
      }
      if (sum == t) ok = true;
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}