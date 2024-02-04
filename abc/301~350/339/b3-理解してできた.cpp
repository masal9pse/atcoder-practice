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

// 8方向
// const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
// const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};
// 4方向 上、右、下、左
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

int main()
{
  /*
  問題回答中
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    解き方探り plan
      1. 4方向へ移動する
      2. 1の際、枠外に出た際の対応
        ex: (1,W)から右に進む場合、(1,1)がある (i,W) (i,1)
            (U,1)の下は(1,1) => (U,j)の下(1,j)
    コード落とし込み方針決め
    疑問点
      大体、解き方探りとコード落とし込み方針決めで詰まるのでその下にこれを置いておく。
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
      トーラスの数式を理解できてなかった

  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
  */
  int h, w, n;
  cin >> h >> w >> n;
  vector<string> s(h);
  rep(i,h) rep(j,w) s[i]+='.';
  int di[4] = {-1, 0, 1, 0};
  int dj[4] = {0, 1, 0, -1};
  int x = 0,y = 0,now = 0;
  rep(i,n) {
    if (s[x][y] == '.') {
      s[x][y] = '#';
      now++;
    }
    else {
      s[x][y] = '.';
      now+=3;
    }
    now%=4;
    x+=di[now];
    y+=dj[now];
    if (x == -1) x = h-1; if (x == h) x = 0;
    if (y == -1) y = w-1; if (y == w) y = 0;
  }
  rep(i, h) cout << s[i] << endl;
  return 0;
}