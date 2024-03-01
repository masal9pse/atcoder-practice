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
    問題文の理解 read
    解き方探り、考察 plan
      N！でmax8なので最大8重回せばいけるけど、やりたくないね。
      そうだった、順列全探索使えるやーん。

      順列の計算量はN！
    コード落とし込み方針決め
    疑問点
      大体、解き方探りとコード落とし込み方針決めで詰まるのでその下にこれを置いておく。
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: ソート
    意識すること
      計算量を考えない問題でも計算量を少なくなるよう考察を進める、
      これによって今の自分に欠如している論理的思考や数学的な考え方が身に付くはず

  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える
      解説読んで大方理解できるが、落とし込みが面倒な時
        写経での解説ACでいい、ただし理解が9割できてからACすること
    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    参考記事リンク    
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
  */

  int n;
  cin >> n;
  vector<int> x(n),y(n);
  rep(i,n) cin >> x[i] >> y[i];
  vector<int> ord;
  rep(i,n) ord.push_back(i);

  double sm = 0;
  do
  {
    rep(i,n-1) {
      int a = ord[i];
      int b = ord[i+1];
      double dx = x[a]-x[b];
      double dy = y[a]-y[b];
      sm += sqrt(dx*dx+dy*dy);
    }
  } while (next_permutation(all(ord)));
  
  // N!個割る 3なら6
  rep(i,n) sm /= (i+1);
  printf("%.10f\n",sm);
    
  // 順列N!がO(N^2)で解けると思ってた、ほんとにバカ。
  // しかも2回目な気がする。
  // int n;
  // cin >> n;
  // vector<double> d;
  // vector<P<int>> t(n);
  // rep(i,n) cin >> t[i].first >> t[i].second;
  // int count = 0;
  // rep(i,n) rep(j,n) {
  //   if (i == j) continue;
  //   count++;
  // }
  return 0;
}