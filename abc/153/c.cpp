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
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    rep(i, n) cin >> h[i];
    sort(h.rbegin(), h.rend());
    vector<bool> is_down(n);
    k = min(n,k);
    rep(i, k)
    {
        is_down[i] = true;
    }
    ll ans = 0;
    rep(i, n)
    {
        if (!is_down[i])
        {
            ans += h[i];
        }
    }
    cout << ans << endl;
    return 0;
}