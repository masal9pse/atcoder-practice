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
    vector d(n, vector<int>(n));
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        d[u][v] = 1;
        d[v][u] = 1;
    }
    int ans = 0;
    rep(i, n) rep(j, i)
    {
        rep(k, j)
        {
            if (d[i][j] == 1 && d[j][k] == 1 && d[i][k] == 1)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}