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
    int n, x;
    cin >> n >> x;
    x *= 100;
    vector<pair<int, int>> vp(n);
    rep(i, n) cin >> vp[i].first >> vp[i].second;
    int drank = 0;
    int ans = 0;
    rep(i, n)
    {
        drank += vp[i].first * vp[i].second;
        ans++;
        if (drank > x)
            break;
    }
    if (drank > x)
        cout << ans << endl;
    else
        cout << -1 << endl;
    return 0;
}