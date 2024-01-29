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
  問題回答中
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
      頭が働かん、問題文の意味掴めず      
    実装方針決め plan
      制約が緩いからゴリ押しでも解けそう

      pair<正直者かどうか、回答数> 初期値 {1,0}
      p1が1で、かつ回答数が1以上であればans++
      回答数0ならp1が1でもansに加算しない
    疑問点
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
    意識すること
      計算量を考えない問題でも計算量を少なくなるよう考察を進める、
      これによって今の自分に欠如している論理的思考や数学的な考え方が身に付くはず

  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える
      bit全探索使えばいけるみたい
    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: bit全探索
  */
  int n;
  cin >> n;
  vector<P<int>> d;
  rep(i, n) d.emplace_back(1, 0);
  rep(i, n)
  {
    int a, x, y;
    cin >> a;
    rep(j, a)
    {
      cin >> x >> y;
      x--;
      if (d[x].first)
      {
        d[x].first = y;
        d[x].second++;
        //  d.emplace_back(y,d[i].second+1);
      }
      else
      {
        d[x].first = 0;
        d[x].second++;
        // d.emplace_back(0,d[i].second+1);
      }
    }
  }
  int ans = 0;
  rep(i,n) {
    if (d[i].first && d[i].second) ans++;
  }
  cout << ans << endl;
  return 0;
}