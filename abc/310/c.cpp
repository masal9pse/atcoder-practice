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
      問題文理解　6m
      実装方針
        合致しなかった場合に、リバースしてsetに突っ込み最後にsetの個数を見る
        ex 入力1 abc cbaの場合
            abcが存在しないのでリバースしたcbaがセットに入る
            cbaがあるので、何もしない
          入力2 de deの場合
            deが存在しないのでedがセットに入る。
            deが存在しないので、edがセットに入るが、集合管理なので複数個にならない。
    */
    int n;
    cin >> n;
    // cout << n << endl;
    set<string> st;
    rep(i, n)
    {
        string s;
        cin >> s;
        // if (st.count(s)) {

        // }
        // else {
        //   reverse(s.begin(), s.end());
        //   st.insert(s);
        // }

        // あとでこれも通るか確認
        if (st.count(s) == 0) {
          reverse(s.begin(), s.end());
          st.insert(s);
        }
    }
    cout << st.size() << endl;
    return 0;
}