// 解説AC
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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
// テストケース
// https://www.dropbox.com/sh/nx3tnilzqz7df8a/AAA3C0ZYYEnFXF6QopVCKxjNa/abc329/C?dl=0&subfolder_nav_tracking=1
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<char,int> > d;
    d.emplace_back(s[0],0);
    // 部分文字列に分割する
    for (auto c:s)
    {
        if (d.back().first == c) d.back().second++;
        else d.emplace_back(c,1);
    }
    vector<int> ans(26);
    // nでループを回すと配列外参照でACしなかった。
    // atを使うか
    rep(i,d.size()) {
        ans[d[i].first -'a'] = max(ans[d[i].first-'a'],d[i].second);
    }
    int sum = 0;
    rep(i,26) {
        sum += ans[i];
    }
    cout << sum << endl;
    return 0;
}