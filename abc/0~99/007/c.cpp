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
vector<int> dxs = {1, 0, -1, 0};
vector<int> dys = {0, 1, 0, -1};

int main()
{
  /*
  問題回答中
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
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
    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
  */
  int r,c,sy,sx,gy,gx;
  cin >> r >> c;
  cin >> sy >> sx;
  cin >> gy >> gx;
  sy--,sx--,gy--,gx--;
  vector<string> s(r);
  rep(i,r) cin >> s[i];
  G dist(r,vector<int>(c,-1));
  queue<P<int>> que;
  dist[sy][sx] = 0;
  // que.push({sy,sx});
  que.emplace(sy,sx);
  while (!que.empty())
  {
    auto [x,y] = que.front();
    que.pop();
    rep(i,4) {
      int x2 = x + dxs[i];
      int y2 = y + dys[i];
      if (x2 < 0 || y2 < 0 || x2 >= r || y2 >= c) continue; 
      if (s[x2][y2] == '#') continue;
      if (dist[x2][y2] != -1) continue;
      dist[x2][y2] = dist[x][y]+1;
      que.push({x2,y2});
    }
  }
  cout << dist[gy][gx] << endl;
  return 0;
}