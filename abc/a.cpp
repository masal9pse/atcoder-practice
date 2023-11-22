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
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a[i];
    vector<string> b = a;
    rep(i, n)
    {
        rep(j, n)
        {
            // 先頭の行の一番左
            if (i == 0 && j == 0)
            {
                a[i][j] = b[i + 1][j];
                continue;
            }

            // 先頭の行の一番左以外
            if (i == 0 && j != 0)
            {
                a[i][j] = b[i][j - 1];
                continue;
            }

            // 真ん中の一番左
            if (i != 0 && i != n - 1 && j == 0)
            {
                a[i][j] = b[i + 1][j];
                continue;
            }

            // 真ん中の一番右
            if (i != 0 && i != n - 1 && j == n - 1)
            {
                a[i][j] = b[i - 1][j];
                continue;
            }

            // 一番下の右角以外
            if (i == n - 1 && j != n - 1)
            {
                a[i][j] = b[i][j + 1];
                continue;
            }

            // 一番下の右角
            if (i == n - 1 && j == n - 1)
            {
                a[i][j] = b[i - 1][j];
                continue;
            }
        }
    }
    rep(i, n)
    {
        cout << a[i] << endl;
    }
    return 0;
}