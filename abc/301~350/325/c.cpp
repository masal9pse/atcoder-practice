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
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
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
      隣接している個数、つまり連結成分の個数なのでグラフ探索アルゴリズムを使える

      連結成分の個数を求めるのでこれやるか。。
      https://algo-method.com/tasks/956
    解説動画見た video
  */
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  int ans = 0;
  vector<vector<bool>> used(h, vector<bool>(w));
  rep(i, h) rep(j, w)
  {
    if (s[i][j] == '.' or used[i][j])
      continue;
    queue<P<int>> que;
    que.push({i, j});
    while (!que.empty())
    {
      P<int> p = que.front();
      que.pop();
      int x = p.first;
      int y = p.second;
      rep(v, 8)
      {
        int nx = x + di[v];
        int ny = y + dj[v];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w)
          continue;
        if (used[nx][ny])
          continue;
        if (s[nx][ny] == '.')
          continue;
        used[nx][ny] = true;
        que.push({nx, ny});
      }
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}