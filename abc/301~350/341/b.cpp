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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  /*
  問題回答中
    過去問を解く際は、一旦1,2分問題を見る。解法が思いつかなければ解説をちょろっとみて使用アルゴリズム等の確認を
    してから再チャレンジしていい。
    問題文の理解 read
    解き方探り、考察 plan
      分からん、見る
    コード落とし込み方針決め
    疑問点
      大体、解き方探りとコード落とし込み方針決めで詰まるのでその下にこれを置いておく。
    実装 do
    ３つのパートに分け、それぞれに時間制限を設けることで以下のメリットがある
     - すぐに解説を見てしまう癖を防止できる
     - １問に何時間も粘りすぎてしまう問題を防止できる
    コーナーケース　細かいコーナーケースをここに記載
    
      ex: ソート
    意識すること
      計算量を考えない問題でも計算量を少なくなるよう考察を進める、
      これによって今の自分に欠如している論理的思考や数学的な考え方が身に付くはず

  復習
    解説記事見たメモ article
      理解すること＋どうやったらその問題を初見で解けるか考える
      解説読んで大方理解できるが、落とし込みが面倒な時
        写経での解説ACでいい、ただし理解が9割できてからACすること

        n国の値だけ出力すればいいので、他は気にしなくていい
        「国iの通貨を可能な限り、国i+1の通貨に交換する操作を行えばいい」
        　貪欲法で、国1,2,3,N-1から順に可能な限り通貨を交換しておけば国Nの通貨の枚数が
        最大になる        
        行える交換の回数 = ⌊ai / si⌋なので、
        a[i+1]に⌊ai / si⌋ * t[i]を足せばいい

    解説動画見たメモ video
    コーナーケース　細かいコーナーケースをここに記載
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
    参考記事リンク
      https://zenn.dev/yamasakit/articles/998679d0e36862#b---foreign-exchange
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 貪欲法
  */
  int n;
  cin >> n;

  // 問題文の理解はdone
  // どういう基準でiを選定すればいいか分からん
  vector<ll> a(n),s(n-1),t(n-1);
  rep(i,n) cin >> a[i];
  rep(i,n-1) cin >> s[i] >> t[i];
  rep(i,n-1) a[i+1] += a[i]/s[i]*t[i];
  cout << a[n-1] << endl; 
  return 0;
}