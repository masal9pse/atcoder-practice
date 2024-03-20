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
  /*
   AI聞いても無理

   嘘解法　重複を消す aとする
   |a|C2をする abaだと2通りあるけど、2C2 = 1でうまくいかん
   おそらく組み合わせの問題？
   
   重複した際の組み合わせ
   キーワード　組み合わせ ちょうど１回

   4C3を 4*3*2*1/3*2*1と勘違いしてた。本当は4*3/2*1だった。これを学べただけでも良しとしましょう
  */
  string s;
  cin >> s;
  set<char> st;
  for (char c:s) st.insert(c);
  // オーバーフローの対応
  ll a;
  rep(i,st.size()) a *= 
  
  return 0;
}