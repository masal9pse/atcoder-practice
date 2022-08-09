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
    int n;
    cin >> n;
    vector<pair<string, string>> st(n);
    rep(i, n) cin >> st[i].first >> st[i].second;
    bool is_nick_name = true;
    rep(i, n)
    {
        bool tmp_is_frist_nick_name = true;
        bool tmp_is_second_nick_name = true;
        rep(j, n)
        {
            if (i == j)
                continue;
            if (st[i].first == st[j].first || st[i].first == st[j].second)
            {
                tmp_is_frist_nick_name = false;
            }

            if (st[i].second == st[j].first || st[i].second == st[j].second)
            {
                tmp_is_second_nick_name = false;
            }
        }
        if (!tmp_is_frist_nick_name && !tmp_is_second_nick_name)
        {
            is_nick_name = false;
            break;
        }
    }
    if (is_nick_name)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}