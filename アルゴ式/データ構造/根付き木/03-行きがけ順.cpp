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

int main()
{
  /*
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
      有向グラフなので、末尾の子は次数0になる
    実装 do

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n;
  cin >> n;
  G box(n);
  // rep(v, n-1)
  for (int i = 1; i < n; i++)
  {
    int p;
    cin >> p;
    // 矢印ついてるので有向グラフ
    box[p].push_back(i);
  }
  int t = 3;
  auto dfs = [&](auto f, int v) -> void {
    cout << v << " ";
    for(int u:box[v]) {
      f(f,u); 
    }
  };
  dfs(dfs,0);
  cout << endl;
  return 0;
}