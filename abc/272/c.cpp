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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.rbegin(), a.rend());
    ll ans = 0;
    bool flag = false;
    if (a.size() == 2)
    {
        if (a[0] % 2 == 0 && a[1] % 2 == 1)
        {
            cout << -1 << endl;
            return 0;
        }
        if (a[0] % 2 == 1 && a[1] % 2 == 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    rep(i, n)
    {
        rep(j, i)
        {
            ans = a[i] + a[j];
            if (ans % 2 == 0)
            {
                cout << ans << endl;
                return 0;
            }
        }
    }
    // if (ans == 0)
    //     cout << 0 << endl;
    return 0;
}