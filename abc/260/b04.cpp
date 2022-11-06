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
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    vector<P> p = {};
    vector<bool> d(n);
    rep(i, n)
    {
        p.emplace_back(-a[i], i);
    }
    sort(p.begin(),p.end());
    rep(i, x)
    {
        d[p[i].second] = true;
    }
    int k = 3;

    p = {};
    rep(i, n)
    {
        if (!d[i])
            p.emplace_back(-b[i], i);
    }
    sort(p.begin(),p.end());
    rep(i, y)
    {
        d[p[i].second] = true;
    }

    p = {};
    rep(i, n)
    {
        if (!d[i])
            p.emplace_back(-a[i] - b[i], i);
    }
    sort(p.begin(),p.end());
    rep(i, z)
    {
        d[p[i].second] = true;
    }

    rep(i, n) if (d[i]) cout << i + 1 << endl;
    return 0;
}