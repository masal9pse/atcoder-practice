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
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
      とりあえず偶数一覧を2で割ると5進数になる。
      ５進数とは0 ~ 4でできた数値のこと 0,14,114 etc
      0から始まっていてスタートがずれているのでn-1する

      泥臭いやり方
      　桁数を数える
      　
  */
  ll n;
  cin >> n;
  n--;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }
  string s;
  while (n)
  {
    int t = n%5*2;
    // s += '0'+(n%5*2);
    // '0'を+するとintをstringに
    s += '0'+ t;
    n/=5;
    int k = 2;
  }
  // reverse(all(s));
  reverse(s.begin(),s.end());
  cout << s << endl;
  return 0;
}