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
using namespace std;
using ll = long long;
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  /*
    全て目安20m
    問題文の理解 read
    実装方針決め plan
     O(NM)をどう改善するか...
    実装 do
    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える

    解説動画見た video

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  rep(i, m) cin >> a[i];
  vector<int> c(n+1);
  int ans = 0;
  rep(i,m) {
    c[a[i]]++;
    if (c[ans] < c[a[i]]) ans = a[i];
    else if (c[ans] == c[a[i]]) ans = min(ans,a[i]);
    cout << ans << endl;
  }
  return 0;
}