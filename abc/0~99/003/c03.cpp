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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  // int deg,dis;
  double deg,dis;
  cin >> deg >> dis;
  // intで入力を受け取ると、変数名をdouble型に指定しているが小数点が出力されない
  double wm = deg/10;
  string ans1;
  if (wm < 11.25) ans1 = "N";
  else if (wm < 33.75) ans1 = "NNE";
  else if (wm <  56.25) ans1 = "NE";
  else if (wm < 78.75) ans1 = "ENE";
  else if (wm < 101.25) ans1 = "E";
  else if (wm < 123.75) ans1 = "ESE";
  else if (wm < 146.25) ans1 = "SE";
  else if (wm < 168.75) ans1 = "SSE";
  else if (wm < 191.25) ans1 = "S";
  else if (wm < 213.75) ans1 = "SSW";
  else if (wm < 236.25) ans1 = "SW";
  else if (wm < 258.75) ans1 = "WSW";
  else if (wm < 281.25) ans1 = "W";
  else if (wm < 303.75) ans1 = "WNW";
  else if (wm < 326.25) ans1 = "NW";
  else if (wm < 348.75) ans1 = "NNW";
  else ans1 = "N";
  // 風向は一旦このまま

  // 風力基準して、風程/60すると割り切れなかった場合の誤差が気になる。
  // なので、基準の風速を*60して風程に直せばいい。
  // そして、disと比較すれば四捨五入の処理がいらない
  // ケース5のように、dis/60して小数第2があるケースだとbwt_iよりデカくなるケースがあるので
  // bwsにも四捨五入にならないように.4を追加しないとダメ
  // ex: 644/60 = 10.7333....で10.7
  // 10.7*60 = 642 644以下になるから、10.74しないとダメ
  // 10.74*60 = 644.4だから条件に合致する。
  // *100して*60するとintでも扱えるね
  vector<double> bws = {0.24, 1.54, 3.34, 5.44, 7.94, 10.74, 13.84, 17.14, 20.74, 24.44, 28.44, 32.64};
  int bwsl = bws.size();
  vector<double> bwt;
  for(double w: bws) bwt.push_back(w*60);
  int ans2 = -1;
  rep(i,bwt.size()) {
    if (dis <= bwt[i]) {
      ans2 = i;
      break;
    }
  }
  if (ans2 == -1) ans2 = 12;
  if (ans2 == 0) ans1 = "C";
  cout << ans1 << " " << ans2 << endl;

  // 誤差に気をつけていた前回コードとは違い、0.04を追加するという工夫が必要だけどビビらなくていい
  return 0;
}