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
    ll mod = 998244353;

    vector<ll> a(6);
    rep(i, 6)
    {
        cin >> a[i];
        a[i] %= mod;
    }

    ll abc = (a[0] * a[1] % mod) * a[2] % mod;
    ll def = (a[3] * a[4] % mod) * a[5] % mod;
    ll ans = (abc - def) % mod;
    cout << ans << endl;
    return 0;
}