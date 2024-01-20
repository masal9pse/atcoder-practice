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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 4方向
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  /*
  問題回答中
    全て目安20m　ただ手が動くうちはエンドレスでやる。これによってコンテスト本番の粘りACや思考力のupにつながる
    問題文の理解 read
    実装方針決め plan
      10進数と8進数に直して、それぞれ7が含まないか調べる。
      O(N^2)にならないように別々で求める必要があるかも

    疑問点
      1. 7が含むような数を求めたいがそれを求めるベストプラクティスが分からん
      できればstringには直したくない。
      forでNまで回して、stringに直してfind関数を使って、その文字に7があるかみたいなやり方をするとO(N^2)でTLEになりそう

      intのままやっても数値が大きくなった場合にTLEしそう
      2. 8進数の直し方

    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする

    意識すること
      計算量を考えない問題でも計算量を少なくなるよう考察を進める、
      これによって今の自分に欠如している論理的思考や数学的な考え方が身に付くはず

  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える

      解説では「下の桁から求めていく方法が最も有名かつ簡単です。」って書いてるけど、それやったらTLEしそう。。

    解説動画見たメモ video
    　whileでやるやり方で計算量大丈夫みたい、なぜかは分かってない
    　あ、1の位を進数判定する場合はO(1),10の位はO(2),100=>O(3),1000=>O(4),100000 => O(5)
      100000 => O(6)
      こう考えたら、全然足りるな
      なんでO(N^2)回かかると思ったんだろ
      厳密な計算量求めたい
      つまり10^5という値に対して6回しか計算してないから全然間に合うな

    　8進数の直し方
       8でわり続ければいい。
       10進数と同じ
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 全探索
  */
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    bool ok = true;
    for (int base : {8, 10})
    {
      int x = i;
      while (x)
      {
        if (x % base == 7)
          ok = false;
        x /= base;
      }
    }
    if (ok)
      ans++;
  }
  cout << ans << endl;
  return 0;
}