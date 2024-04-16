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
  // 実装に悩む場合、20分考えて無理なら答え見る
  /*
  問題回答中
    過去問を解く際は、一旦1,2分問題を見る。解法が思いつかなければ解説をちょろっとみて使用アルゴリズム等の確認を
    してから再チャレンジしていい。
    問題文の理解
      制約次第では、実装が楽になることがあるのでAでも必ず見る。
    解き方探り
    　風向は deg/10して場合分け
      
      風力は風速を計算し、小数第2 位を四捨五入して場合分け
      では風速は、dir/60でもとまる
    計算量見積もり
    コード落とし込み方針決め
    疑問点　懸念点
      大体、解き方探りとコード落とし込み方針決めで詰まるのでその下にこれを置いておく。
    実装
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
    コーナーケース
    意識すること、メモ
      計算量を考えない問題でも計算量を少なくなるよう考察を進める、
      これによって今の自分に欠如している論理的思考や数学的な考え方が身に付くはず

  復習
    解説記事見たメモ
      理解すること＋どうやったらその問題を初見で解けるか考える
      解説読んで大方理解できるが、落とし込みが面倒な時
        写経での解説ACでいい、ただし理解が9割できてからACすること
        解説読んでもわからないときに、とりあえず写経してみると案外理解が深まることがある。

    解説動画見たメモ
    コーナーケース　解説後
    参考記事リンク    
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
    ステータス　自力ACか解説ACか、まだ理解できてないのか書く
  */
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
  double ws = dis/60;
  double wp = round(ws * 10) / 10;
  int ans2;
  // 以下と書いてあるやつを代入
  if (wp <= 0.2) ans2 = 0;
  else if (wp <= 1.5) ans2 = 1;  
  else if (wp <= 3.3) ans2 = 2;
  else if (wp <= 5.4) ans2 = 3;
  else if (wp <= 7.9) ans2 = 4;
  else if (wp <= 10.7) ans2 = 5;
  else if (wp <= 13.8) ans2 = 6;
  else if (wp <= 17.1) ans2 = 7;
  else if (wp <= 20.7) ans2 = 8;
  else if (wp <= 24.4) ans2 = 9;
  else if (wp <= 28.4) ans2 = 10;
  else if (wp <= 32.6) ans2 = 11;
  else ans2 = 12;
  if (ans2 == 0) ans1 = "C";
  cout << ans1 << " " << ans2 << endl;
  return 0;
}