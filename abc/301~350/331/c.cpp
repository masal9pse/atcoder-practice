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
    1 2 3 4 5
    5より大きい数値はない 0
    4より大きい数値は5 5
    3より大きい数値は5と4 9
    ....

    1 4 1 4 2 => ソート 1 1 2 4 4
    4より大きい数値はない、つまり 0
    4より大きい数値はない、つまり 0
    2より大きい数値は4が2つ つまり 8
    1より大きい数値は4が2個、2が1つ つまり10
    1より大きい数値は4が2個、2が1つ つまり10

    順番に回答する必要があるので、indexを持っておく必要もある
    */
    int n;
    cin >> n;
    // {数値Ai,インデックス}
    vector<pair<int, int>> d(n);
    vector<int> ans(n);
    rep(i, n)
    {
        int a;
        cin >> a;
        d[i].first = a;
        d[i].second = i;
    }

    sort(d.begin(), d.end());
    int keep = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1) {
            keep = d.at(i).first;
            continue;
        }
        int di = d.at(i).first;
        int di2 = d.at(i+1).first;
        if (d.at(i).first < d.at(i + 1).first)
        {
            // ans.at(d.at(i).second) += d.at(i + 1).first + keep;
            ans.at(d.at(i).second) += keep;
            keep += d.at(i).first;
            int dd = 3;
        }
        // else if (d.at(i).first == d.at(i + 1).first)
        else
        {
            keep += d.at(i).first;
            int dd = 3;
        }
    }
    rep(i, n)
    {
        cout << ans[i] << endl;
    }
    return 0;
}