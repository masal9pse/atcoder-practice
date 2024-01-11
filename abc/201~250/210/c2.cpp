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
      問題文の意味がわからない時はサンプルを参考にする
    実装方針決め plan
      mapでciのindex番号を持ったがここから先どうすればいいかわからん
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見た video
  */
  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  rep(i, n) cin >> c[i];
  map<int, int> mp;
  int ans = 0;
  int now = 0;
  rep(i, n)
  {
    if (mp[c[i]] == 0)
      now++;
    mp[c[i]]++;
    if (i >= k)
    {
      mp[c[i - k]]--;
      if (mp[c[i - k]] == 0)
        now--;
    }
    ans = max(ans,now);
  }
  cout << ans << endl;
  return 0;
}