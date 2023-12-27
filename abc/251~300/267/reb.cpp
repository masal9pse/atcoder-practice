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
    string s;
    cin >> s;
    vector<vector<int>> a(7, vector<int>(2));
    rep(i, 7) rep(j, 2) a[i][j] = -1;
    a[0][0] = s[6] - '0';

    a[1][0] = s[3] - '0';

    a[2][0] = s[7] - '0';
    a[2][1] = s[1] - '0';

    a[3][0] = s[4] - '0';
    a[3][1] = s[0] - '0';

    a[4][0] = s[8] - '0';
    a[4][1] = s[2] - '0';

    a[5][0] = s[5] - '0';

    a[6][0] = s[9] - '0';
    if (s[0] == '1')
    {
        cout << "No" << endl;
        return 0;
    }

    rep(ai, 7)
    {
        bool understand_flag = true;
        if (a[ai][0] == 0 && a[ai][1] == 0 || a[ai][0] == 0 && a[ai][1] == -1)
        {
            understand_flag = false;
        }
        rep(bi, 7)
        {
            if (ai != bi)
            {

                if (understand_flag)
                {
                    if (a[bi][0] == 0 && a[bi][1] == 0 || a[bi][0] == 0 && a[bi][1] == -1)
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}