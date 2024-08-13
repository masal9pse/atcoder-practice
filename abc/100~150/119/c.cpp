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
#define rep2(i, n) for (int i = 0; i <= n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{  
  /** 
   * それぞれの竹に対して
   * Aに使うか 3
   * Bに使うか 2
   * Cに使うか 1
   * 使わないか 0
   これを4進数で扱う
   5種類の竹が30231
   ならAは1,4種類目
   Bは3種類目
   Cは5種類目に使用する。

   Aについて、先に合成しても後に合成しても答えは同じ。
   なので、合成してから考えるのがポイント！

   魔法を使用する際の全探索法が分からない。=> 先に合成しても後に合成しても答えは同じなので合成してから、その絶対値を求めればそれが使ったMPになる。
  */
  int n,a,b,c;
  cin >> n >> a >> b >> c;
  vector<int> target = {a,b,c};
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  int ans = 1 << 30;
  rep(bit,(1 << n*2)) {
    vector<int> v(n);
    rep(i,n) {
      v[i] = (bit >> 2 * i) & 3;
    }
    // ポイント計算
    // 同じ数字なら合計
    vector<int> sum(3),nums(3);
    int point = 0;
    rep(i,n) {
        if (v[i] == 3) continue;
        sum[v[i]] += l[i];
        nums[v[i]]++;
    }
    bool ok = true;
    rep(i,3) {
        if (nums[i] == 0) ok = false;
    }
    if (!ok) continue;
    rep(i,3) {
        point += abs(sum[i]-target[i]);
        point += (nums[i]-1) * 10;
    }
    ans = min(ans,point);
    // v[0] == 0 and v[1] == 1 and v[2] == 1 and v[3] == 1 and v[4] == 2
  }
  cout << ans << endl;
  return 0;
}