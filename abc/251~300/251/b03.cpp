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
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> ws(w + 1);
    rep(i, n) if (a[i] <= w) ws[a[i]] = true;

    rep(i, n) rep(j, n)
    {
        if (i == j)
            continue;
        int s = a[i] + a[j];
        if (s <= w)
            ws[s] = true;
    }

    rep(i, n) rep(j, i) rep(k, j)
    {
        int s = a[i] + a[j] + a[k];
        if (s <= w)
            ws[s] = true;
    }
    int ans = 0;
    rep(i, w + 1)
    {
        if (ws[i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}

// int main()
// {
//     int n, w;
//     cin >> n >> w;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];
//     ll ans = 0;
//     vector<int>
//     rep(i, n)
//     {
//         if (a[i] <= w)
//             ans++;
//         rep(j, i)
//         {
//             if (a[i] + a[j] <= w)
//                 ans++;
//             rep(k, j)
//             {
//                 if (a[i] + a[j] + a[k] <= w)
//                     ans++;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }