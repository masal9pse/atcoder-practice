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
  int n;
  cin >> n;
  map<string,ll> mp;
  rep(i,n) {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    // これだとソートして同じ値の場合、直前の値しか比較しかしていないので、3つ以上同じ値があると対応できない
    // if (st.find(s) != st.end()) ans++;
    // else st.insert(s);

    // 解説見た　mapで数を持って、2種類選ぶので iC2の計算をすればいい
    // iC2 = i*(i-1)/2 これでいける
    // 組み合わせ
    mp[s]++;
  }
  ll ans = 0;
  for (auto s:mp) ans += s.second * (s.second-1)/2;
  cout << ans << endl;
  return 0;
}