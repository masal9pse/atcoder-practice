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

int f(char a) {
  if (a == 'R') return 1;
  if (a == 'L') return -1;
  if (a == 'U') return 1;
  if (a == 'D') return -1;
}

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read done
    実装方針決め plan
      1でパーツ1以外の座標を操作するような処理を行うとN回処理がかかってTLE
      パーツ1以外を計算量削減しながら操作するにはどうすればよいのか。。。
    　2でパーツ１以外の座標を表示する

    　無理だな、茶色くらいのdiffかな
    　今　494
    実装 do
      
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n,q;
  cin >> n >> q;
  vector<pair<ll,ll>> p(n+1);
  vector<ll> px(n+1);
  vector<ll> py(n+1);
  rep(i,q) {
    int q1,q2;
    cin >> q1 >> q2;
    if (q1 == 1)

  }

  rep(i,n+1) {}
  return 0;
}