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
    全て目安20m
    問題文の理解 read 6m
    実装方針決め plan
    実装 do
      
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
    - すぐに解説を見てしまう癖を防止できる
    - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  int n,d;
  cin >> n >> d;
  int ans = 0;
  int t = 0;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  rep(i,d) {
    bool is_vacation = true;
    rep(j,n) {
      // これで縦の比較ができるが、n < mのときiがn以上になると配列外参照になる
      // dを先に回したら動作

      // その人が暇ではなかったら
      if (s[j][i] == 'x') is_vacation = false;
    }
    if (is_vacation) t++;
    else t = 0;
    ans = max(ans,t);
  }
  cout << ans << endl;
  return 0;
}