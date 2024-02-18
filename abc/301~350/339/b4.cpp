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
#include <numeric>
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

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
  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える
    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索 グリッド 上下左右　トーラス
  */
  int h, w, n;
  cin >> h >> w >> n;
  vector<string> s(h);
  rep(i, h) rep(j, w) s[i] += '.';
  int x = 0, y = 0, now = 0;
  rep(i, n)
  {
    if (s[x][y] == '.')
    {
      s[x][y] = '#';
      now = (now + 1) % 4;
    }
    else
    {
      s[x][y] = '.';
      now = (now + 3) % 4;
    }
    // 上
    if (now == 0)
    {
      if (x > 0) x--;
      else x = h - 1;
    }
    // 右
    if (now == 1)
    {
      if (y < w - 1) y++;
      else y = 0;
    }
    // 下
    if (now == 2)
    {
      if (x < h - 1) x++;
      else x = 0;
    }
    // 左
    if (now == 3)
    {
      if (y > 0) y--;
      else y = w - 1;
    }
  }
  for (string k : s)
    cout << k << endl;
  return 0;
}