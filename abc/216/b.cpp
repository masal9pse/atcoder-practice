#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> st(n);
    rep(i, n)
    {
        cin >> st[i].first >> st[i].second;
    }
    rep(i, n)
    {
        rep(j, i)
        {
            if (st[i].first == st[j].first && st[i].second == st[j].second)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}