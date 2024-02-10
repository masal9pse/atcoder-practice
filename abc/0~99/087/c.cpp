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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {1, 0};
const vector<int> dj = {0, 1};

int main()
{
  int n;
  cin >> n;
  // 全探索
  G a(2,vector<int>(n));
  rep(i,2) rep(j,n) cin >> a[i][j];
  // 全ての
  // 問題文読み違えてた。(2,N)はただ下にいけばいいわけじゃないな。
  // 1つ下の一番右側だ
  int ans = 0;
  rep(i,n) {
    int sum = 0;
    // rep(j,i) sum += a[0][j];
    // ケース1なら(0,0)なら3、(0,2)なら 3 + 2 + 2する
    for (int j = 0; j <= i; j++) sum += a[0][j];

    rrep(j,i,n) sum += a[1][j];
    ans = max(sum,ans);
  }
  cout << ans << endl;
  return 0;
}