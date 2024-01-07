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
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read done
    実装方針決め plan
      最大h,wを4重で回せる

    解説見る
     アルファベットをマス目上、シークワーズ
    実装 do

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  string T = "snuke";
  rep(si, h) rep(sj, w)
  {
    rep(v, 8)
    {
      int i = si;
      int j = sj;
      // あとで、breakじゃなくて空のstringにつめて一致させる処理もやる
      string str = "";
      rep(k, 5)
      {
        if (i < 0 || j < 0 || i >= h || j >= w)
          break;
        str += s[i][j];
        // if (s[i][j] != T[k])
        //   break;

        // if (k == 4)
        // {
        //   // found
        //   // 再度ループを回す必要がある
        //   i = si;
        //   j = sj;
        //   rep(nk, 5)
        //   {
        //     cout << i + 1 << " " << j + 1 << endl;
        //     // printf("\%d %d\n",i+1,j+1);
        //     i += di[v];
        //     j += dj[v];
        //   }
        //   return 0;
        // }
        i += di[v];
        j += dj[v];
      }
      if (str == T) {
          i = si;
          j = sj;
          rep(nk, 5)
          {
            cout << i + 1 << " " << j + 1 << endl;
            // printf("\%d %d\n",i+1,j+1);
            i += di[v];
            j += dj[v];
          }
      }
    }
  }
  return 0;
}