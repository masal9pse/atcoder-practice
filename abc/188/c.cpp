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
    int k = pow(2, n);
    vector<P> a(k);
    rep(i, k)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    int half = k / 2;
    P l_max_p;
    P r_max_p;
    rep(i, half)
    {
        if (a[i].first > l_max_p.first)
        {
            l_max_p.first = a[i].first;
            l_max_p.second = a[i].second;
        }
    }
    for (int i = half; i <= k; i++)
    {
        if (a[i].first > r_max_p.first)
        {
            r_max_p.first = a[i].first;
            r_max_p.second = a[i].second;
        }
    }
    int ans = 0;
    if (r_max_p.first > l_max_p.first)
    {
        ans = l_max_p.second + 1;
        cout << ans << endl;
    }
    else
    {
        ans = r_max_p.second + 1;
        cout << ans << endl;
    }
    return 0;
}