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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n) cin >> a[i];
    ll c = 0, s = 0;
    rep(i, n)
    {
        b[i] = a[i] % x;
        c += a[i] / x;
        s += a[i];
    }
    if (c >= k)
    {
        s -= (ll)x * k;
    }
    else
    {
        s -= c * x;
        k -= c;
        k = min(k, n);
        sort(b.rbegin(), b.rend());
        rep(i, k)
        {
            s -= b[i];
            int aa = 3;
        }
    }
    cout << s << endl;
    return 0;
}