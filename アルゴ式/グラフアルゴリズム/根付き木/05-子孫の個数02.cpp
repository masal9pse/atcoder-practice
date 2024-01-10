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
// using P = pair<int, int>;
template<class T> using P = pair<T, T>;
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
    　 方針決めと先にしよう
      方針を言語化して、それができたらオッケーというルールにしよ
      頂点を全てdfsする、最初の値は加算しない。=> というより最後から-1すればいい
      行きがけのタイミングで子孫の数を記録する
      ただこれだとN^2でTLEしそう
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える

      頂点vの子孫の個数は、頂点vを根とする部分木に含まれる頂点の個数 -1で求められる
      結論
        頂点0をdfsして、帰りがけ時に答えを合算する =>これで、TLEしなくてすむが、 意味分からん

    解説動画見た video
  */
  int n;
  cin >> n;
  G to(n);
  rep(i,n) {
    int p;
    cin >> p;
    to[p].push_back(i);
  }
  
  return 0;
}