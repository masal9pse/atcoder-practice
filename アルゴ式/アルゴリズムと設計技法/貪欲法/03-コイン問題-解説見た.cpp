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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    /*
      問題文の理解 read m
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め plan m
        生成AIを参考にするのはあり
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int x;
    cin >> x;
    vector<int> a(4);
    rep(i,4) cin >> a[i];
    vector<int> coins = {50,10,5,1};
    int ans = 0;
    rep(i,4) {
        // 最大で何枚コインを使ったかわかる。
        int add = x / coins[i];
        // とはいえ枚数の限界値もあるので、それを下記で指定する。
        add = min(add,a[i]);
        // 枚数を加算
        ans += add;
        // 使った金額をxから引いていく
        x -= coins[i] * add;
    }
    cout << ans << endl;
    return 0;
}