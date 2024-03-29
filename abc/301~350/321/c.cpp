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
      理解した
    実装方針決め plan
      maxは、9876543210
      10^9 < 9876543210 < 10^10なので、これを小さい順にならべていけば。。ただTLEする
      数字の集合にして、それを使うか使わないか(bit全探索が使えそう)で判断すればいい =>

    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
  */
  vector<long long> ans;
  for (int i = 2; i < (1 << 10); i++)
  {
    long long x = 0;
    for (int j = 9; j >= 0; j--)
    {
      if (i & (1 << j))
      {
        x *= 10;
        x += j;
      }
    }
    ans.push_back(x);
  }
  // sort(ans.begin(), ans.end());
  int k;
  cin >> k;
  cout << ans[k-1] << endl;
  return 0;
}