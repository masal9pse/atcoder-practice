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
const ll INF = 1e18;
void chmax(ll &a, ll b) { a = max(a, b); }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector dp(n + 1, vector<ll>(m + 1, -INF));
    dp[0][0] = 0;
    rep(i, n)
    {
        rep(j, m + 1)
        {
            chmax(dp[i + 1][j], dp[i][j]);
            if (j) chmax(dp[i + 1][j],dp[i][j-1]+a[i]*j);
            int k = 3;
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}

// int main()
// {
//     // chmaxの動作検証
//     // ll a = 3;
//     // ll b = 4;
//     // chmax(a,b);
//     // cout << a << endl;  // output 4

//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     vector dp(n + 1, vector<ll>(m + 1, -INF));
//     dp[0][0] = 0;
//     rep(i, n)
//     {
//         rep(j, m + 1)
//         {
//             chmax(dp[i + 1][j], dp[i][j]);
//             if (j)
//                 chmax(dp[i + 1][j], dp[i][j - 1] + a[i] * j);
//         }
//     }
//     cout << dp[n][m] << endl;
//     return 0;
// }