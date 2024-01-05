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
      文字列操作はスタックと覚えておく
      普通にやると、削除して残った文字を削除前の場所に入れる際に計算量に負担が出る

      １文字づつ詰め行って、ABCになったら削除する
    実装 do

    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
  */
  string s;
  cin >> s;
  string ans;
  rep(i, s.size())
  {
    ans += s[i];
    if (ans.size() >= 3 && ans.substr(ans.size() - 3) == "ABC")
      ans.erase(ans.size() - 3, 3);
      // ansのpop_backを３回するやり方の方が楽
  }
  cout << ans << endl;
  return 0;
}