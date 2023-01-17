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
#include <queue>
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
    vector<vector<int>> g(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool> vidisted(n);
    auto dfs = [&](auto dfs, int v) -> void
    {
        vidisted[v] = true;
        for (auto u : g[v])
        {
            if (vidisted[u])
                continue;
            dfs(dfs, u);
        }
    };
    int ans = 0;
    rep(v, n)
    {
        if (vidisted[v])
            continue;
        dfs(dfs, v);
        ans++;
    }
    cout << ans << endl;
    return 0;
}