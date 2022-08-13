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
    int r, c;
    cin >> r >> c;
    // vector<vector<int>> a(3, vector<int>(3));
    vector<vector<int>> a(15, vector<int>(15));
    // 0をwhile,1をblack
    rep(i, 15) rep(j, 15)
    {
        if (i == 0 || i == 14)
            a[i][j] = 1;
        if (i >= 1 && i <= 13)
            a[i][0] = 1;
            a[i][14] = 1;
        if (i >= 2 && i <= 12)
        {
            a[i][2] = 1;
            a[i][12] = 1;
        }

        if (i >= 4 && i <= 10)
        {
            a[i][4] = 1;
            a[i][10] = 1;
        }


        // ２、１２列目の横一列
        if (i == 2 && j >= 2 && j <= 12)
            a[i][j] = 1;
        if (i == 12 && j >= 2 && j <= 12)
            a[i][j] = 1;

        //  4、１０列目の横一列
        if (i == 4 && j >= 4 && j <= 10)
            a[i][j] = 1;
        if (i == 10 && j >= 4 && j <= 10)
            a[i][j] = 1;

        if (i == 6 && j >= 6 && j <= 8)
            a[i][j] = 1;
        if (i == 8 && j >= 6 && j <= 8)
            a[i][j] = 1;

        a[7][6] = 1;
        a[7][8] = 1;        
    }
    int ans = a[r - 1][c - 1];
    if (ans == 1)
        cout << "black" << endl;
    else
        cout << "white" << endl;
    return 0;
}