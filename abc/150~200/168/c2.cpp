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
    実装方針決め plan
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる

    解説記事見た article
      理解すること＋どうやったらその問題を初見で解けるか考える
      「座標が分かるよね」と反応するか「長さとなす角が分かるよね」で解く
    解説動画見た video
  */
  int A, B, H, M;
  std::cin >> A >> B >> H >> M;

  // 時針の角度
  double hour_angle = 30 * H + 0.5 * M;
  // 分針の角度
  double minute_angle = 6 * M;

  // 角度差
  double angle_difference = std::abs(hour_angle - minute_angle);

  // 三角関数を用いて距離を計算
  double distance = std::sqrt(A * A + B * B - 2 * A * B * std::cos(angle_difference));

  std::cout << distance << std::endl;
  return 0;
}