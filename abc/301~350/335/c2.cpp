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

      なぜできなかった？
        頭が移動した後のパーツ２〜をそのまま追従する方針だけしか思いつかなかった。
      どうやったらできた？
      　　
    解説動画見た video
      先頭に値を追加して、末尾を削除するとやりたい機能を実現できる。
      あと動画はシングルタスクで見ないと全く理解できないよ
  */
  int n,q;
  cin >> n >> q;
  deque<P<int>> d;
  rep(i,n) d.push_back({i+1,0});
  rep(i,q) {
    int type;
    cin >> type;
    if (type == 1){
      char c;
      cin >> c;
      int x = d[0].first;
      int y = d[0].second;
      if (c == 'R') x++;
      if (c == 'L') x--;
      if (c == 'U') y++;
      if (c == 'D') y--;
      d.push_front({x,y});
      d.pop_back();
    }
    else {
      int p;
      cin >> p;
      p--;
      cout << d[p].first << " " << d[p].second << endl; 
    }
  } 
  return 0;
}