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
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    vector<bool> ans(101);
    vector<int> a(r1 - l1);
    vector<int> b(r2 - l2);

    for (int i = l1; i <= r1; i++)
    {
        for (int j = l2; j <= r2; j++)
        {
            if (i == j)
            {
                ans[i] = true;
                int k = 3;
            }
        }
    }
    int count = 0;
    // boolがtrueの最小値と最大値を変数に入れたい。
    int minc = 0;
    int maxc = 0;
    rep(i, 101)
    {
        if (ans[i])
        {
            minc = i;
            break;
        }
    }
    rep(i, 101)
    {
        if (ans[i])
        {
            maxc = max(i, maxc);
        }
    }
    // cout << count << endl;
    int lb = maxc - minc;
    cout << maxc - minc << endl;
    // if (l1 <= l2 && l2 < r1)
    // {
    //     if (r1 < r2)
    //     {
    //         cout << r1 - l2 << endl;
    //     }
    //     else
    //     {
    //         cout << r2 - l2 << endl;
    //     }
    // }
    // else if (){}
    // else
    // {
    //     cout << 0 << endl;
    // }
    return 0;
}