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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 4方向
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

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

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 端から考える => 貪欲法 
  */
  int n;
  cin >> n;
  vector<ll> a(n + 1), b(n);
  rep(i, n + 1) cin >> a[i];
  rep(i, n) cin >> b[i];
  vector<ll> r(n + 1);
  rep(i, n + 1)
  {
    if (i == 0)
      r[i] = r[i] + a[i];
    else
      r[i] = r[i - 1] + a[i];
  }
  ll ans = 0;
  // O(N * 2)
  rep(i, n)
  {
    // int b2 = b[i];
    rep(qj, 2)
    {
      int j = i + qj;
      if (a[j] <= b[i])
      {
        ans += a[j];
        b[i] -= a[j];
      } else {
        ans += b[i];
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}