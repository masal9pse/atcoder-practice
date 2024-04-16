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
      まず、全員が１人はいけるか確かめる
      いけたら、
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
        
        連立方程式でa,eについて解く。n,mはわかっているのであとは残りのbを全探索しつつ、a,eについて解いた式に全探索中の
        bを入れてやれば答えが出る。

        連立方程式は連立した式の数だけ変数を減らすことができる。変数が3つで式が2つなので、変数は2つ減らせる

    解説動画見たメモ
    コーナーケース　解説後
    参考記事リンク    
      https://wk1080id.hatenablog.com/entry/2017/03/09/161421
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 連立方程式
    ステータス　自力ACか解説ACか、まだ理解できてないのか書く
  */
  int n,m;
  cin >> n >> m;
  int a,e;
  rep(b,n+1) {
    a = b + 3*n-m;
    e = m-2*n-2*b;
    if (a >= 0 && e >= 0) {
      cout << a << " " << e << " " << b << endl;
      return 0;
    }
  }
  cout<<-1<<" "<<-1<<" "<<-1<<endl;
  return 0;
}