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

int main()
{
    vector<vector<int>> d(9, vector<int>(9));
    rep(i, 9) rep(j, 9) cin >> d.at(i).at(j);
    // vector<vector<bool>> f(9,vector<bool>(9));
    rep(i, 9)
    {
        vector<bool> first_check_list(9);
        vector<bool> second_check_list(9);
        rep(j, 9)
        {
            first_check_list[d[i][j] - 1] = true;
            second_check_list[d[j][i] - 1] = true;
        }
        rep(j, 9)
        {
            if (!first_check_list[j] || !second_check_list[j])
            {
                cout << "No" << endl;
                return 0;
            }
        }

        // ケース3
        rep(j, 9)
        {
            if (i % 3 == 0 && j % 3 == 0)
            {
                vector<bool> third_check_list(9);
                rep(a, 3)
                {
                    rep(b, 3)
                    {

                        int row_value = d[i + a][j + b] - 1;
                        int column_value = d[b + j][i + a] - 1;
                        third_check_list.at(row_value) = true;
                        third_check_list.at(column_value) = true;
                    }
                }
                if (!third_check_list[j])
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}