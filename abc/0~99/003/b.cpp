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
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

bool solve(string s, string t)
{
  bool f = true;
  string j = "atcoder";
  rep(i, s.size())
  {
    if (s[i] != t[i])
    {
      if (s[i] == '@')
      {
        bool tmp = false;
        for (char c3 : j)
        {
          if (c3 == t[i])
            tmp = true;
        }
        if (!tmp)
          f = false;
      }
      else if (t[i] == '@')
      {
        bool tmp = false;
        for (char c3 : j)
        {
          if (c3 == s[i])
            tmp = true;
        }
        if (!tmp)
          f = false;
      }
      else
      {
        f = false;
      }
    }
  }
  return f;
}

int main()
{
  string s, t;
  cin >> s >> t;
  if (solve(s, t))
    cout << "You can win" << endl;
  else
    cout << "You will lose" << endl;
  return 0;
}