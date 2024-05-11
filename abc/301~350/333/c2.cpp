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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  /*
   O(100**3)
  */
  int n;
  cin >> n;
  // vector<ll> a = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111, 11111111111,111111111111};
  // これを動的に実装したい
  vector<ll> a;
  // for (初期化; 条件式; 更新) { 更新は初期化の次に実行される
  // つまり0番目は1が入る
  for (ll i = 1; i < 1e12; i = i*10+1)
  {
    a.push_back(i);
  }
  
  set<ll> st;
  rep(i,12) rep(j,12) rep(k,12) {
    st.insert(a[i]+a[j]+a[k]);
  }
  int count = 0;
  for(ll s:st) {
    if (count == n-1) {
      cout << s << endl;
      return 0;
    }
    count++;
  }
  return 0;
}