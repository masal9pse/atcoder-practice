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
  int n,a,b,c;
  cin >> n >> a >> b >> c;
  vector<int> target = {a,b,c};
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  int ans = 1 << 30;
  rep(bit,(1 << n * 2)) {
    vector<int> v(n);
    // 4進数の末尾2桁を取得するために、3(11)で&演算を行う。
    rep(i,n) v[i] = (bit >> (2*i)) & 3;
    vector<int> sum(3),nums(3);
    rep(i,n) {
      if (v[i] == 3) continue;
      sum[v[i]] += l[i];
      nums[v[i]]++;
    }
    int score = 0;
    rep(i,3) {
      score += abs(sum[i]-target[i]);
      score += (nums[i]-1)*10;
    }
    ans = min(ans,score);
  }
  cout << ans << endl;
  return 0;
}