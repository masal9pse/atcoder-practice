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
    int n, m;
    cin >> n >> m;
    vector g(n, vector<int>(n));
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    int ans = 0;
    rep(a, n) rep(b, a) rep(c, b)
    {
        if (g[a][b] == 1 && g[b][a] == 1 &&
            g[b][c] == 1 && g[c][b] == 1 &&
            g[c][a] == 1 && g[a][c] == 1)
        {
            // printf("%d %d %d\n", a, b, c);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}