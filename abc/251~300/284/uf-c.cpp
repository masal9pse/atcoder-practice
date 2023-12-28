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
#include <stack>
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

struct UnionFind
{
    vector<int> par;

    UnionFind() {}
    UnionFind(int n) : par(n, -1) {}
    void init(int n) { par.assign(n, -1); }

    int root(int x)
    {
        if (par[x] < 0)
            return x;
        else
            return par[x] = root(par[x]);
    }

    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }

    bool merge(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;
        if (par[x] > par[y])
            swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    // １つの連結成分の部分グラフの個数
    int size(int x)
    {
        return -par[root(x)];
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        --u, --v;
        uf.merge(u, v);
    }
    int ans = 0;
    // aclのライブラリではleader
    // 根本（親）のと一致したらcountすればいい。
    rep(i,n) if (uf.root(i) == i) ans++;
    cout << ans << endl;
    return 0;
}