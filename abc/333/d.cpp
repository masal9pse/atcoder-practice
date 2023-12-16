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
      問題文の理解 m
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め m
        生成AIを参考にするのはあり
        nが333の時、112222222233で10^8以上なのでここまでループは回せない
        2回ループを回して、残り一回は2回のループ合計の引き算から取得すればいけそう？
      実装 m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    // int n;
    // cin >> n;
    // vector<int> a = {1,11,111};
    int k = 10;
    int output = 0;
    rep(i,5) {
      // output
      // 1 11 111 1111
      output = (output * k)+1;
      cout << output << endl;
    }

    rep(i,100) {
      
    }
    // vector<int> sum;
    // do
    // {
    //   cout << a[0] << " " << a[1] << " " << a[2] << endl;

    // } while (next_permutation(a.begin(),a.end()));   
    return 0;
}