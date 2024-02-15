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
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
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
   解説動画見たメモ video
   コーナーケース　細かいコーナーケースをここに記載
   参考記事リンク
   関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
     ex: 全探索
 */
  // int n;
  // cin >> n;
  // ciとaとbとの関連が分かってない
  // a1~3,b1~3、それぞれ100通りつまり100^6探索すればいけるが、100^6 == 10^12なので探索は無理
  // aiだけ範囲固定して、他は逆算する
  // つまりC12 = a1+b2が成り立つ、、、そのためaが0~100を探索すればいけると思ってたけどbiがマイナスのケースもある
  // なのでこれは嘘解法
  // 写経していなかった、やらかした。
  int cs[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> cs[i][j];
    }
  }

  bool ok = false;
  for (int a0 = 0; a0 <= 100; a0++)
  {
    for (int a1 = 0; a1 <= 100; a1++)
    {
      for (int a2 = 0; a2 <= 100; a2++)
      {
        int b0 = cs[0][0] - a0;
        int b1 = cs[0][1] - a0;
        int b2 = cs[0][2] - a0;

        bool ok_b0 = (b0 == cs[1][0] - a1 && b0 == cs[2][0] - a2);
        bool ok_b1 = (b1 == cs[1][1] - a1 && b1 == cs[2][1] - a2);
        bool ok_b2 = (b2 == cs[1][2] - a1 && b2 == cs[2][2] - a2);

        if (ok_b0 && ok_b1 && ok_b2)
          ok = true;
      }
    }
  }

  string ans = ok ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}