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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

const int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i, n)
    {
        string s;
        cin >> s;
        rep(j, n)
        {
            a[i][j] = s[j] - '0';
        }
    }
    ll ans = 0;
    rep(si, n) rep(sj, n) rep(v, 8)
    {
        int i = si, j = sj;
        ll x = 0;
        rep(k, n)
        {
            x = x * 10 + a[i][j];
            // ここら辺わからん
            i += di[v];
            j += dj[v];
            i = (i + n) % n;
            j = (j + n) % n;
        }
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}

// const int di[] = {-1,-1,-1,0,0,1,1,1};
// const int dj[] = {-1,0,1,-1,1,-1,0,1};

// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> a(n,vector<int>(n));
//     // 標準入力
//     rep(i,n) {
//         string s;
//         cin >> s;
//         rep(j,n) {
//             a[i][j] = s[j]-'0';
//         }
//     }
//     ll ans = 0;

//     rep(si,n) rep(sj,n) rep(v,8) {
//         int i = si,j=sj;
//         ll x = 0;
//         rep(k,n) {
//             x = x*10+a[i][j];
//             i += di[v];
//             j += dj[v];
//             i = (i+n)%n;
//             j = (j+n)%n;
//             int o = 3;
//         }
//         ans = max(ans,x);
//         int o = 3;
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> a(n,vector<int>(n));
//     rep(i,n) {
//         string s;
//         cin >> s;
//         rep(j,n) {
//             a[i][j] = s[j]-'0';
//         }
//     }
//     ll ans = 0;
//     rep(si,n) rep(sj,n) rep(v,8){
//         int i = si,j = sj;
//         ll x = 0;
//         rep(k,n) {
//             x = x*10+a[i][j];
//             i += di[v];
//             j += dj[v];
//             i = (i+n)%n;
//             j = (j+n)%n;
//         }
//         ans = max(ans,x);
//     }
//     cout << ans << endl;
//     return 0;
// }