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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    /*
      問題文の理解 ok
        問題文とサンプルの(1,2)と(1,3)の意味が合わない
        c1が1、c2が(1,2,3)、aが(1,1)は無理なので2ケース

        AiとCiでindexの位置が一致していることに着目するのは大事な考えなので今後も意識
      実装方針決め 
      　24m迷ったが計算量削減のアイデアが思い浮かばないので解説見る
        C = {100,100,100} cが同じケース
        c1は100通り
        c2は99通り
        c3は98通り
        だから100 * 99 * 98 <= ここで掛け算するのも出て来なかった

        並び替えても問題ない。
        > C が昇順に並んでいるとき、条件を満たす A の個数は (Ci−i+1) を掛け合わせた値であることが分かります。
        ？なので動画みる

        2 4 5の場合
        c1は2通り
        c2はc1で1つ使ったので3通り
        c3はc1、c2で1つ使ったので3通り

      実装 m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n;
    cin >> n;
    // これだと間に合わない
    // rep(i,n) {
    //   rep(j,c[i]) {

    //   }
    // }
    return 0;
}