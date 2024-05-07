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
    シミュレーションをすればいいが、D倍以上になり続けるケースつまり-1を出力するケースの対応が難しい
    対応策として、操作回数を全探索する。
    操作回数は10^5程度になるはず
    https://ebisuke33.hatenablog.com/entry/abc207ab
    https://zenn.dev/link/comments/74a3571a87865e
    キーワード　全探索するものを工夫
    数式を立てる場合とシミュレーションをする２ケースがある。才能がない自分ならシミュレーションをするのがベターかな
    https://blog.hamayanhamayan.com/entry/2021/06/27/005502

    シミュレーションをする場合は、目標回数を全探索という視点の切り替えが必要
    a + bx <= cx * d
    割り算しそうになったけど、普通にrに*dすればいい
    解説通りに解く
    不等式を立てる
  */
  ll a,b,c,d;
  cin >> a >> b >> c >> d;  
  rep(i,1000000) {
    if (a+b*i <= c*i*d) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}