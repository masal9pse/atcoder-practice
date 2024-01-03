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
      問題文の理解 read 20m
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め plan m
        上に行く操作が問題文からは全く読み取れない、ようやくわかった 最後にA1jが来ていたため
        #の個数が列ごとに一致すればYes?　無理
        ただそれが確実に正であるか証明できていない。Aで#が同じ行にあって、Bはないときは無理そう

        動画見た感じ普通に全探索する。
        AとBの配列を比較する場合は、
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int h,w;
    cin >> h >> w;
    vector<string> a(h),b(h); 
    rep(i,h) cin >> a[i];
    rep(i,h) cin >> b[i];
    rep(s,h) rep(t,w) {
      vector<string> na = a;
      rep(i,h) rep(j,w) na[(i+s)%h][(j+t)%w] = a[i][j];
      if (na == b) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    cout << "No" << endl;
    return 0;
}