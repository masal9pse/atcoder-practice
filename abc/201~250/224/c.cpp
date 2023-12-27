#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }
    int ans = 0;
    rep(i, n) rep(j, i) rep(k, j)
    {
        if ((p[i].first - p[k].first) * (p[j].second - p[k].second) - (p[j].first - p[k].first) * (p[i].second - p[k].second) != 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}