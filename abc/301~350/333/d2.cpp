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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;


// 深さ優先探索


int main()
{
    /*
      問題文の理解 read 10m
        9,7,6,1が最善だと思ったけど、頂点の次数が1のやつ(これを葉である頂点という)を削除することに気がついた。
        つまり、9,8,7,6,1が最善
      実装方針決め plan 10m
        次数が1つ(葉)の頂点を求めて、それ基準にして深さ優先探索
        問題文の通り、葉の頂点を消す。深さを加算しておく
        深さの最小値を出す。

        ただ上記だと計算量が足りなそう、メモ化再帰ならいける？
        7を辿ったら、それをvectorに保存しておく
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n;
    cin >> n;
    vector<vector<int>> g(n);    
    // 次数を持っておく
    vector<int> counts(n);
    int ans = 10e8;
    rep(i,n) {
      // 次数が1だったら深さ優先探索
      if (counts[i] == 1) {
       int count = f(counts[i]);
       ans = min(ans,count);
      }
    }
    cout << ans << endl;
    return 0;
}