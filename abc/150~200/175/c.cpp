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
  /*
  問題回答中
    過去問を解く際は、一旦1,2分問題を見る。解法が思いつかなければ解説をちょろっとみて使用アルゴリズム等の確認を
    してから再チャレンジしていい。
    問題文の理解
      制約次第では、実装が楽になることがあるのでAでも必ず見る。
    解き方探り
      x => abs(x)にできる。

      往復する前にたどり着く前に終わる。　dk <= xなら x - dk
      往復する時　dk > xのとき　うーん分からん

    計算量見積もり
    コード落とし込み方針決め
    疑問点、懸念点
      dkがオーバーフローする可能性大 llは10^18しか入らない
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

      往復する前にたどり着く前に終わる。　dk <= xなら x - dk
      　　オーバーフローをどうするか => 式変形して x >= dk => x/d >= k
      　　これでいける。ただコードに落とし込むときはどうするんや？
      往復する時　dk > xのとき　うーん分からん
        往復にたどり着く直前までの回数 = x/d回
        ここ(x/d回)までは、-dする。
        そこからは、-d,+dの繰り返し

        仮説 => 合ってた。
        　つまり、k - x/d回は、無限ループする。偶数なら戻ってくるのでx - (x/d*d)が答え
        　奇数もう一回-dしたのが答えは、( - (x/d*d)) - dが答え
    解説動画見たメモ
    コーナーケース　解説後
    参考記事リンク    
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 貪欲法　場合分け
    ステータス
      解説動画を見て理解したがコードの落とし込みがまだ
      7.5割程度理解
  */
  ll x,k,d;
  cin >> x >> k >> d;
  x = abs(x);
  ll ans;
  if (x/d > k) {
    ans = x - d*k; 
  } else {
    // 往復に入るまでの回数
    ll e = x/d;
    k -= e;
    x -= e*d;
    if (k % 2 == 0) ans = x;
    else ans = abs(x - d);
  }
  cout << ans << endl;
  return 0;
}