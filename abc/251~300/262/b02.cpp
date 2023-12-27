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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n,m;
    cin >> n >> m;
    vector g(n,vector<int>(n));
    rep(i,m) {
        int u,v;
        cin >> u >> v;
        u--;v--;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    int ans = 0;
    rep(i,n) rep(j,i) rep(k,j) {
        if (g[i][j] == 1 && g[i][k] == 1 && g[j][k] == 1) ans ++;
    }
    cout << ans << endl;
    return 0;
}

// int main () {
//     int n,m;
//     cin >> n >> m;
//     vector g(n,vector<int>(n));
//     rep(i,m) {
//         int u,v;
//         cin >> u >> v;
//         --u;--v;
//         g[u][v] = 1;
//         g[v][u] = 1;
//     }
//     int ans = 0;
//     rep(i,n) rep(j,i) rep(k,j) {
//         if (!g[i][j]) continue;
//         if (!g[i][k]) continue;
//         if (!g[k][j]) continue;
//         if (!g[j][k]) continue;
//         ans ++;
//     }
//     cout << ans << endl;
// }


// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     vector g(n,vector<int>(n));
//     rep(i,m) {
//         int a,b;
//         cin >> a >> b;
//         --a;b--;
//         g[a][b] = 1;
//         g[b][a] = 1;
//     }
//     int ans = 0;
// k < j < iが成り立つループ
//     rep(i,n) rep(j,i) rep(k,j) {
//         if (!g[i][j]) continue;
//         if (!g[i][k]) continue;
//         if (!g[k][j]) continue;
//         ans ++;
//     }
//     cout << ans << endl;
//     return 0;
// }