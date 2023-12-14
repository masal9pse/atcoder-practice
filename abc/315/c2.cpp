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

int main()
{
    /*
     後でpairを使うメリットをzennに書く
     問題文理解 12m
     方針決め
        仮1
            味の同じアイスの美味しさの最大値 s,t
            味の違うアイスの美味しさ s,t
                味の違うアイスtを出すには、sと味が異なっていて美味しさがsより1つ小さいアイスを出す。
            上記２つを比較して大きい方が答え
        仮2 これで実装する
            おいしさを大きい順に2つ(s,t)抜き出す。
                味が異なる場合
                    s + tを出力
                味が同じ場合
                    s + t/2を変数aに保存
                    最大値の次の味が異なっていて、かつおいしさが異なるアイスを見つける s + t　これをbとする
                    aとbを比較して最大値を求める
    */
    int n;
    cin >> n;
    // {s,f}
    vector<pair<int, int>> fs(n);
    rep(i, n) cin >> fs[i].second >> fs[i].first;
    sort(fs.rbegin(), fs.rend());
    // 味が異なる場合
    if (fs[0].second != fs[1].second)
    {
        cout << (fs[0].first + fs[1].first) << endl;
        return 0;
    }

    // 味が同じ場合
    int next_d = 0;
    int index = fs[0].second;
    rep(i, n)
    {
        if (index != fs[i].second)
        {
            index = fs[i].second;
            next_d = fs[i].first;
            break;
        }
    }
    int d1 = fs[0].first + fs[1].first / 2;
    int d2 = fs[0].first + next_d;
    int ans = max(d1, d2);
    cout << ans << endl;
    return 0;
}