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
    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    rep(i, h1) rep(j, w1) cin >> a[i][j];
    int h2, w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    rep(i, h2) rep(j, w2) cin >> b[i][j];
    // rep(hs,2^h1)
    // c++には累乗をあわらすものがないのでこれでやる。powがあるのでは？
    rep(hs, 1 << h1) rep(ws, 1 << w1)
    {
        vector<int> is, js;
        rep(i, h1) if (hs >> i & 1) is.push_back(i);
        rep(j, w1) if (ws >> j & 1) js.push_back(j);
        if (is.size() != h2)
            continue;
        if (js.size() != w2)
            continue;
        vector c(h2,vector<int>(w2));
        rep(i,h2)rep(j,w2) c[i][j] = a[is[i]][js[j]];
        if (b == c) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}