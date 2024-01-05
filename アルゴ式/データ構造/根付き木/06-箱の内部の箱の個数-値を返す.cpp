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
    実装 do

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n;
  cin >> n;
  G box(n);
  for (int i = 1; i < n; i++)
  {
    int a;
    cin >> a;
    box[a].push_back(i);
  }
  int v;
  cin >> v;
  auto dfs = [&](auto f, int v) -> int
  {
    int ans = box[v].size();
    for (int u : box[v])
    {
      ans += f(f, u);
    }
    // case1だと箱1は2こ、箱3は0、箱4は1個、箱5は0なので答え3となる
    return ans;
  };
  int ans = dfs(dfs, v);
  cout << ans << endl;
  return 0;
}