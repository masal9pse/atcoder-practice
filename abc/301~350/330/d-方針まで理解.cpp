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
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
    実装 do

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  // row(列)、column(行)
  vector<int> r(n), c(n);
  rep(i, n)
  {
    rep(j, n)
    {
      if (s[i][j] == 'o')
      {
        r[i]++;
        c[j]++;
      }
    }
  }
  ll ans = 0;
  rep(i, n) rep(j, n)
  {
    if (s[i][j] == 'o')
    {
      ans += (r[i] - 1) * (c[j] - 1);
    }
  }
  cout << ans << endl;
  return 0;
}