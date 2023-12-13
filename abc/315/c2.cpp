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
     問題文理解 12m
     方針決め
        仮1
            味の同じアイスの美味しさの最大値 s,t
            味の違うアイスの美味しさ s,t
                味の違うアイスtを出すには、sと味が異なっていて美味しさがsより1つ小さいアイスを出す。
            上記２つを比較して大きい方が答え
        仮2 これで実装する
            大きい順に2つ(s,t)抜き出す。
                味が異なる場合
                    s + tを出力
                味が同じ場合
                    s + t/2を出力
    */
    int n;
    cin >> n;
    // {s,f}
    vector<pair<int,int>> fs(n);
    rep(i,n) cin >> fs[i].second >> fs[i].first;
    sort(fs.begin(),fs.end());
    // 味が異なる場合
    if (fs[n-1].second != fs[n-2].second)
    {
        cout << (fs[n-1].first + fs[n-2].first) << endl;
        return 0;
    }

    // 味が同じ場合
    
    
    return 0;
}