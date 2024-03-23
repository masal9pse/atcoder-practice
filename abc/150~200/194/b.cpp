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
      別々で割り当てた場合と同じ人に割り当てた場合をそれぞれ全探索、
      その後、少ない方を出力
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

      この方針だと間違ってそうなので答え見る。
      仕事 A に割り当てる従業員の番号と、仕事 B に割り当てる従業員の番号を全探索すればいいみたい。
      O(N^2)
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
 int n;
 cin >> n;
 vector<int> a(n),b(n);
 rep(i,n) cin >> a[i] >> b[i];
  int res = MI;
  rep(i,n) rep(j,n) {
    int cost;
    if (i == j) cost = a[i] + b[j];
    else cost = max(a[i],b[j]);
    // chmin(res,cost);
    res = min(res,cost);
  }
  cout << res << endl;

  // O(N)で解こうとしたが挫折
  // int n;
  // cin >> n;
  // vector<P<int>> a(n),b(n);
  // // 別々
  // rep(i,n) {
  //   int A,B;
  //   cin >> A >> B;
  //   a[i].first = A;
  //   a[i].second = i;
  //   b[i].first = B;
  //   b[i].second = i;
  // }
  // sort(all(a));
  // sort(all(b));
  // P<ll> other;
  // rep(i,2) {
  //   if (a[i].second == b[i].second) {
  //     if (a[i].first < b[i].first) other.first = a[0].first;
  //     else other.second = b[0].first;
  //   }
  // }
  return 0;
}