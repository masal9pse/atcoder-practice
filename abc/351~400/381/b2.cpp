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

bool t(string s) {
  int n = s.size();
  if (n % 2 != 0) {
    return false;
  }

  for (int i = 1; i <= (n/2); i++)
  {
    int a = (2*i)-1;
    a--;
    int b = 2*i;
    b--;
    if (s[a] != s[b]) {
      return false;
    }
  }

  // 同じ文字はちょうど2回ずつ
  map<char,int> mp;
  for(char c:s) {
    mp[c]++;
  }
  for(auto m:mp) {
    if (m.second != 2) {
      return false;
    }
  } 
  return true;
}

int main()
{
  string s;
  cin >> s;
  if(t(s)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}