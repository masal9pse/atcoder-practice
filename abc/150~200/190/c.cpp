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
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];
    int k2 = 1 << k;
    int ans = 0;
    rep(s, k2)
    {
        vector<int> dish(n+1);
        rep(i, k)
        {
            if (s >> i & 1)
            {
                dish[d[i]]++;
            }
            else
                dish[c[i]]++;
        }
        int now = 0;
        rep(i, m)
        {
            if (dish[a[i]] == 0)
                continue;
            if (dish[b[i]] == 0)
                continue;
            now++;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}