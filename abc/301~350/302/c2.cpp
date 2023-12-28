#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

// 全然違う
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    rep(i, n) rep(i2, n)
    {
        int count = 0;
        rep(j, m)
        {
            if (i == i2)
                continue;
            string k1 = s[i];
            string k2 = s[i2];
            if (s[i][j] == s[i2][j])
                count++;
        }
        if (count == m - 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}