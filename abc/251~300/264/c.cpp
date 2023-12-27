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

int main()
{
    int h1, w1, h2, w2;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    rep(i, h1) rep(j, w1) cin >> a[i][j];
    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    vector<vector<bool>> b_flag_list(h2, vector<bool>(w2));
    rep(i, h2) rep(j, w2) cin >> b[i][j];

    // int ans = false;
    rep(i2, h2) rep(j2, w2) rep(i1, h1)
    {
        // 
        int tmp_i1;
        int tmp_j1;
        rep(j1, w1)
        {
            // j1が全て同じの時 => aの縦の要素番号が全て同じの時
            if (j1 == 0)
                tmp_i1 = i1;
            if (i1 == 0)
                tmp_j1 = j1;
            if (tmp_i1 == i1 && tmp_j1 == j1)
            {
                if (b[i2][j2] == a[i1][j1])
                {
                    b_flag_list[i2][j2] = true;
                }
            }
        }
    }
    rep(i, h2) rep(j, w2)
    {
        if (!b_flag_list[i][j])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}