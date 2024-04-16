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

bool f1(map<char,int> mp,string t) {
  rep(i,3) {
    char c = t[i]+32;
    // if (!mp.count(c)) return false;     
    if(mp.count(c)) {
      if (mp[c] == 0) return false;
      mp[c]--; 
    } else {
      return false;
    }
  }
  return true;
}

bool f2(map<char,int> mp,string t) {
  // if (t.back() != 'X') return false;
  rep(i,2) {
    char c = t[i]+32;
    // if (!mp.count(c)) return false;
    if(mp.count(c)) {
      if (mp[c] == 0) return false;
      mp[c]--; 
    } else {
      return false;
    }
  }
  return true;
}

int main()
{
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
    - A,B分からなかったら早い段階で生成AI使うことを検討 
  メモ
  わからない点まとめ   
  */
  string s,t;
  cin >> s >> t;
  // mapのfindでlogN
  map<char,int> mp;
  rep(i,s.size()) mp[s[i]]++;
  // まず1だけ
  // bool ok = true;
  bool ok;
  if (t.back() == 'X') {
    ok = f2(mp,t);
  } else {
    ok = f1(mp,t);
  }
  // bool ok1 = f1(mp,t);
  // bool ok2 = f2(mp,t);
  // if (ok1 || ok2) cout << "Yes" << endl;
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;  
  return 0;
}